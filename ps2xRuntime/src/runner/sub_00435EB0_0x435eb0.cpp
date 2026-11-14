#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00435EB0
// Address: 0x435eb0 - 0x436028
void sub_00435EB0_0x435eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435EB0_0x435eb0");
#endif

    switch (ctx->pc) {
        case 0x435f0cu: goto label_435f0c;
        default: break;
    }

    ctx->pc = 0x435eb0u;

    // 0x435eb0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x435eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x435eb4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x435eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x435eb8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x435eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x435ebc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x435ebcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435ec0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x435ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x435ec4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x435ec4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435ec8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x435ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x435ecc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x435eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x435ed0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x435ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x435ed4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x435ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435ed8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x435ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x435edc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x435edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435ee0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x435ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x435ee4: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x435ee4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435ee8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x435ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x435eec: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x435eecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435ef0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x435ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x435ef4: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x435ef4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435ef8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x435ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x435efc: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x435efcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435f00: 0x8fb000a0  lw          $s0, 0xA0($sp)
    ctx->pc = 0x435f00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x435f04: 0xc10a322  jal         func_428C88
    ctx->pc = 0x435F04u;
    SET_GPR_U32(ctx, 31, 0x435F0Cu);
    ctx->pc = 0x435F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435F04u;
    // 0x435f08: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x435F04u, 0x435F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435F0Cu;
label_435f0c:
    // 0x435f0c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x435f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x435f10: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x435f10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x435f14: 0x34848006  ori         $a0, $a0, 0x8006
    ctx->pc = 0x435f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32774);
    // 0x435f18: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x435f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x435f1c: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x435f1cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x435f20: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x435f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x435f24: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x435f24u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x435f28: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x435f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x435f2c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x435F2Cu;
    {
        const bool branch_taken_0x435f2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x435F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435F2Cu;
        // 0x435f30: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435f2c) {
            ctx->pc = 0x435F48u;
            goto label_435f48;
        }
    }
    ctx->pc = 0x435F34u;
    // 0x435f34: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x435f34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435f38: 0x24020156  addiu       $v0, $zero, 0x156
    ctx->pc = 0x435f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x435f3c: 0x70622389  pcpyld      $a0, $v1, $v0
    ctx->pc = 0x435f3cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x435f40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x435F40u;
    {
        const bool branch_taken_0x435f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435F40u;
        // 0x435f44: 0x8f83be20  lw          $v1, -0x41E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435f40) {
            ctx->pc = 0x435F58u;
            goto label_435f58;
        }
    }
    ctx->pc = 0x435F48u;
label_435f48:
    // 0x435f48: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x435f48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435f4c: 0x24020116  addiu       $v0, $zero, 0x116
    ctx->pc = 0x435f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x435f50: 0x70622389  pcpyld      $a0, $v1, $v0
    ctx->pc = 0x435f50u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x435f54: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x435f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_435f58:
    // 0x435f58: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x435f58u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x435f5c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x435f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x435f60: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x435f60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x435f64: 0x111400  sll         $v0, $s1, 16
    ctx->pc = 0x435f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x435f68: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x435f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x435f6c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x435f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x435f70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x435f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435f74: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x435f74u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x435f78: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x435f78u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x435f7c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x435f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x435f80: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x435f80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x435f84: 0x132500  sll         $a0, $s3, 20
    ctx->pc = 0x435f84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 20));
    // 0x435f88: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x435f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x435f8c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x435f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x435f90: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x435f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x435f94: 0x70c42389  pcpyld      $a0, $a2, $a0
    ctx->pc = 0x435f94u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
    // 0x435f98: 0x7c640010  sq          $a0, 0x10($v1)
    ctx->pc = 0x435f98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 4));
    // 0x435f9c: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x435f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x435fa0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x435fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x435fa4: 0x340480ff  ori         $a0, $zero, 0x80FF
    ctx->pc = 0x435fa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33023);
    // 0x435fa8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x435fa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x435fac: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x435facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x435fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x435fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x435fb4: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x435fb4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x435fb8: 0x7c640020  sq          $a0, 0x20($v1)
    ctx->pc = 0x435fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 4));
    // 0x435fbc: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x435fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x435fc0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x435fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x435fc4: 0x152400  sll         $a0, $s5, 16
    ctx->pc = 0x435fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x435fc8: 0x962025  or          $a0, $a0, $s6
    ctx->pc = 0x435fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 22));
    // 0x435fcc: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x435fccu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x435fd0: 0x7c640030  sq          $a0, 0x30($v1)
    ctx->pc = 0x435fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 4));
    // 0x435fd4: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x435fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x435fd8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x435fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x435fdc: 0x172500  sll         $a0, $s7, 20
    ctx->pc = 0x435fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 20));
    // 0x435fe0: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x435fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x435fe4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x435fe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x435fe8: 0x70c42389  pcpyld      $a0, $a2, $a0
    ctx->pc = 0x435fe8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
    // 0x435fec: 0x7c640040  sq          $a0, 0x40($v1)
    ctx->pc = 0x435fecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 4));
    // 0x435ff0: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x435ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x435ff4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x435ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x435ff8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x435ff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x435ffc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x435ffcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x436000: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x436000u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x436004: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x436004u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x436008: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x436008u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x43600c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x43600cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x436010: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x436010u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x436014: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x436014u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x436018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x436018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43601c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43601cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x436020: 0x3e00008  jr          $ra
    ctx->pc = 0x436020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x436024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436020u;
        // 0x436024: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x436020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x436028u;
}
