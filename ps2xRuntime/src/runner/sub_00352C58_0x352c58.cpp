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

// Function: sub_00352C58
// Address: 0x352c58 - 0x3531f8
void sub_00352C58_0x352c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352C58_0x352c58");
#endif

    switch (ctx->pc) {
        case 0x352c9cu: goto label_352c9c;
        case 0x352cc8u: goto label_352cc8;
        case 0x352d18u: goto label_352d18;
        case 0x352d40u: goto label_352d40;
        case 0x352d70u: goto label_352d70;
        case 0x352e88u: goto label_352e88;
        case 0x352eecu: goto label_352eec;
        case 0x352f4cu: goto label_352f4c;
        case 0x352f98u: goto label_352f98;
        case 0x352fb4u: goto label_352fb4;
        case 0x353010u: goto label_353010;
        case 0x353074u: goto label_353074;
        case 0x3530d4u: goto label_3530d4;
        case 0x353158u: goto label_353158;
        default: break;
    }

    ctx->pc = 0x352c58u;

    // 0x352c58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x352c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x352c5c: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x352c5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x352c60: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x352c60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x352c64: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x352c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x352c68: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x352c68u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x352c6c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x352c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x352c70: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x352c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x352c74: 0x38903  sra         $s1, $v1, 4
    ctx->pc = 0x352c74u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 4));
    // 0x352c78: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x352c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x352c7c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x352c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x352c80: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x352c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x352c84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x352c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352c88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x352c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x352c8c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x352c8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352c90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x352c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352c94: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x352C94u;
    SET_GPR_U32(ctx, 31, 0x352C9Cu);
    ctx->pc = 0x352C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352C94u;
    // 0x352c98: 0xa29823  subu        $s3, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x352C94u, 0x352C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352C9Cu;
label_352c9c:
    // 0x352c9c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x352c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x352ca0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x352ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x352ca4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x352ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x352ca8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x352ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x352cac: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x352CACu;
    {
        const bool branch_taken_0x352cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x352CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352CACu;
        // 0x352cb0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352cac) {
            ctx->pc = 0x352CE8u;
            goto label_352ce8;
        }
    }
    ctx->pc = 0x352CB4u;
    // 0x352cb4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x352cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x352cb8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x352cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x352cbc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x352cbcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x352cc0: 0xf  sync
    ctx->pc = 0x352cc0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352cc4: 0x40f  sync.p
    ctx->pc = 0x352cc4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_352cc8:
    // 0x352cc8: 0x0  nop
    ctx->pc = 0x352cc8u;
    // NOP
    // 0x352ccc: 0x0  nop
    ctx->pc = 0x352cccu;
    // NOP
    // 0x352cd0: 0x0  nop
    ctx->pc = 0x352cd0u;
    // NOP
    // 0x352cd4: 0x0  nop
    ctx->pc = 0x352cd4u;
    // NOP
    // 0x352cd8: 0x0  nop
    ctx->pc = 0x352cd8u;
    // NOP
    // 0x352cdc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x352CDCu;
    {
        const bool branch_taken_0x352cdc = (false);
        if (branch_taken_0x352cdc) {
            ctx->pc = 0x352CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352cc8;
        }
    }
    ctx->pc = 0x352CE4u;
    // 0x352ce4: 0x0  nop
    ctx->pc = 0x352ce4u;
    // NOP
label_352ce8:
    // 0x352ce8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x352ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x352cec: 0x2a260401  slti        $a2, $s1, 0x401
    ctx->pc = 0x352cecu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x352cf0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x352cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x352cf4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x352cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352cf8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x352cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x352cfc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x352CFCu;
    {
        const bool branch_taken_0x352cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352CFCu;
        // 0x352d00: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352cfc) {
            ctx->pc = 0x352D5Cu;
            goto label_352d5c;
        }
    }
    ctx->pc = 0x352D04u;
    // 0x352d04: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x352d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x352d08: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x352d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x352d0c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x352d0cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x352d10: 0xf  sync
    ctx->pc = 0x352d10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352d14: 0x40f  sync.p
    ctx->pc = 0x352d14u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_352d18:
    // 0x352d18: 0x0  nop
    ctx->pc = 0x352d18u;
    // NOP
    // 0x352d1c: 0x0  nop
    ctx->pc = 0x352d1cu;
    // NOP
    // 0x352d20: 0x0  nop
    ctx->pc = 0x352d20u;
    // NOP
    // 0x352d24: 0x0  nop
    ctx->pc = 0x352d24u;
    // NOP
    // 0x352d28: 0x0  nop
    ctx->pc = 0x352d28u;
    // NOP
    // 0x352d2c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x352D2Cu;
    {
        const bool branch_taken_0x352d2c = (false);
        if (branch_taken_0x352d2c) {
            ctx->pc = 0x352D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352d18;
        }
    }
    ctx->pc = 0x352D34u;
    // 0x352d34: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x352d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x352d38: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x352d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x352d3c: 0x0  nop
    ctx->pc = 0x352d3cu;
    // NOP
label_352d40:
    // 0x352d40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x352d40u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x352d44: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x352d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x352d48: 0x0  nop
    ctx->pc = 0x352d48u;
    // NOP
    // 0x352d4c: 0x0  nop
    ctx->pc = 0x352d4cu;
    // NOP
    // 0x352d50: 0x0  nop
    ctx->pc = 0x352d50u;
    // NOP
    // 0x352d54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x352D54u;
    {
        const bool branch_taken_0x352d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x352d54) {
            ctx->pc = 0x352D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352d40;
        }
    }
    ctx->pc = 0x352D5Cu;
label_352d5c:
    // 0x352d5c: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x352d5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x352d60: 0x240503ff  addiu       $a1, $zero, 0x3FF
    ctx->pc = 0x352d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x352d64: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x352d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x352d68: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x352d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x352d6c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x352d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_352d70:
    // 0x352d70: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x352d70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352d74: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x352d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x352d78: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x352d78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x352d7c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x352d7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352d80: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x352d80u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x352d84: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x352d84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352d88: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x352d88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x352d8c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x352d8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352d90: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x352d90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x352d94: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x352d94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352d98: 0x7c830040  sq          $v1, 0x40($a0)
    ctx->pc = 0x352d98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 3));
    // 0x352d9c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x352d9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352da0: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x352da0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x352da4: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x352da4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352da8: 0x7c830060  sq          $v1, 0x60($a0)
    ctx->pc = 0x352da8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 3));
    // 0x352dac: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x352dacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352db0: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x352db0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
    // 0x352db4: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x352db4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352db8: 0x7c830080  sq          $v1, 0x80($a0)
    ctx->pc = 0x352db8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 3));
    // 0x352dbc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x352dbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352dc0: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x352dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
    // 0x352dc4: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x352dc4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352dc8: 0x7c8300a0  sq          $v1, 0xA0($a0)
    ctx->pc = 0x352dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 3));
    // 0x352dcc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x352dccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352dd0: 0x7c8200b0  sq          $v0, 0xB0($a0)
    ctx->pc = 0x352dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), GPR_VEC(ctx, 2));
    // 0x352dd4: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x352dd4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352dd8: 0x7c8300c0  sq          $v1, 0xC0($a0)
    ctx->pc = 0x352dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), GPR_VEC(ctx, 3));
    // 0x352ddc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x352ddcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352de0: 0x7c8200d0  sq          $v0, 0xD0($a0)
    ctx->pc = 0x352de0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), GPR_VEC(ctx, 2));
    // 0x352de4: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x352de4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352de8: 0x7c8300e0  sq          $v1, 0xE0($a0)
    ctx->pc = 0x352de8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), GPR_VEC(ctx, 3));
    // 0x352dec: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x352decu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352df0: 0x7c8200f0  sq          $v0, 0xF0($a0)
    ctx->pc = 0x352df0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 240), GPR_VEC(ctx, 2));
    // 0x352df4: 0x4a1ffde  bgez        $a1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x352DF4u;
    {
        const bool branch_taken_0x352df4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x352DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352DF4u;
        // 0x352df8: 0x24840100  addiu       $a0, $a0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352df4) {
            ctx->pc = 0x352D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352d70;
        }
    }
    ctx->pc = 0x352DFCu;
    // 0x352dfc: 0x14c000ca  bnez        $a2, . + 4 + (0xCA << 2)
    ctx->pc = 0x352DFCu;
    {
        const bool branch_taken_0x352dfc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x352dfc) {
            ctx->pc = 0x353128u;
            goto label_353128;
        }
    }
    ctx->pc = 0x352E04u;
    // 0x352e04: 0x240b0400  addiu       $t3, $zero, 0x400
    ctx->pc = 0x352e04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x352e08: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x352e08u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x352e0c: 0x1711023  subu        $v0, $t3, $s1
    ctx->pc = 0x352e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 17)));
    // 0x352e10: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x352e10u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x352e14: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x352e14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x352e18: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x352e18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x352e1c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x352e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x352e20: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x352e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x352e24: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x352e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x352e28: 0x354ad000  ori         $t2, $t2, 0xD000
    ctx->pc = 0x352e28u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)53248);
    // 0x352e2c: 0x3529e020  ori         $t1, $t1, 0xE020
    ctx->pc = 0x352e2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)57376);
    // 0x352e30: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x352e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x352e34: 0x3508e010  ori         $t0, $t0, 0xE010
    ctx->pc = 0x352e34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)57360);
    // 0x352e38: 0x34e7d080  ori         $a3, $a3, 0xD080
    ctx->pc = 0x352e38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)53376);
    // 0x352e3c: 0x34c6d010  ori         $a2, $a2, 0xD010
    ctx->pc = 0x352e3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53264);
    // 0x352e40: 0x2a220401  slti        $v0, $s1, 0x401
    ctx->pc = 0x352e40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x352e44: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x352E44u;
    {
        const bool branch_taken_0x352e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x352E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352E44u;
        // 0x352e48: 0x34a5d020  ori         $a1, $a1, 0xD020 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x352e44) {
            ctx->pc = 0x352F30u;
            goto label_352f30;
        }
    }
    ctx->pc = 0x352E4Cu;
    // 0x352e4c: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x352E4Cu;
    {
        const bool branch_taken_0x352e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x352E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352E4Cu;
        // 0x352e50: 0x28620c00  slti        $v0, $v1, 0xC00 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3072) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x352e4c) {
            ctx->pc = 0x352F98u;
            goto label_352f98;
        }
    }
    ctx->pc = 0x352E54u;
    // 0x352e54: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x352E54u;
    {
        const bool branch_taken_0x352e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352E54u;
        // 0x352e58: 0x28620800  slti        $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2048) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x352e54) {
            ctx->pc = 0x352F30u;
            goto label_352f30;
        }
    }
    ctx->pc = 0x352E5Cu;
    // 0x352e5c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x352E5Cu;
    {
        const bool branch_taken_0x352e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352E5Cu;
        // 0x352e60: 0x28620400  slti        $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x352e5c) {
            ctx->pc = 0x352ED0u;
            goto label_352ed0;
        }
    }
    ctx->pc = 0x352E64u;
    // 0x352e64: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x352E64u;
    {
        const bool branch_taken_0x352e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x352e64) {
            ctx->pc = 0x352F98u;
            goto label_352f98;
        }
    }
    ctx->pc = 0x352E6Cu;
    // 0x352e6c: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x352e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x352e70: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x352e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x352e74: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x352E74u;
    {
        const bool branch_taken_0x352e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352e74) {
            ctx->pc = 0x352EA8u;
            goto label_352ea8;
        }
    }
    ctx->pc = 0x352E7Cu;
    // 0x352e7c: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x352e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x352e80: 0xf  sync
    ctx->pc = 0x352e80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352e84: 0x40f  sync.p
    ctx->pc = 0x352e84u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_352e88:
    // 0x352e88: 0x0  nop
    ctx->pc = 0x352e88u;
    // NOP
    // 0x352e8c: 0x0  nop
    ctx->pc = 0x352e8cu;
    // NOP
    // 0x352e90: 0x0  nop
    ctx->pc = 0x352e90u;
    // NOP
    // 0x352e94: 0x0  nop
    ctx->pc = 0x352e94u;
    // NOP
    // 0x352e98: 0x0  nop
    ctx->pc = 0x352e98u;
    // NOP
    // 0x352e9c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x352E9Cu;
    {
        const bool branch_taken_0x352e9c = (false);
        if (branch_taken_0x352e9c) {
            ctx->pc = 0x352E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352e88;
        }
    }
    ctx->pc = 0x352EA4u;
    // 0x352ea4: 0x0  nop
    ctx->pc = 0x352ea4u;
    // NOP
label_352ea8:
    // 0x352ea8: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x352ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x352eac: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x352eacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x352eb0: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x352eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    // 0x352eb4: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x352eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x352eb8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x352eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x352ebc: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x352ebcu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x352ec0: 0xf  sync
    ctx->pc = 0x352ec0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352ec4: 0x40f  sync.p
    ctx->pc = 0x352ec4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352ec8: 0x26104000  addiu       $s0, $s0, 0x4000
    ctx->pc = 0x352ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16384));
    // 0x352ecc: 0x2631fc00  addiu       $s1, $s1, -0x400
    ctx->pc = 0x352eccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966272));
label_352ed0:
    // 0x352ed0: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x352ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x352ed4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x352ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x352ed8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x352ED8u;
    {
        const bool branch_taken_0x352ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352ed8) {
            ctx->pc = 0x352F08u;
            goto label_352f08;
        }
    }
    ctx->pc = 0x352EE0u;
    // 0x352ee0: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x352ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x352ee4: 0xf  sync
    ctx->pc = 0x352ee4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352ee8: 0x40f  sync.p
    ctx->pc = 0x352ee8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_352eec:
    // 0x352eec: 0x0  nop
    ctx->pc = 0x352eecu;
    // NOP
    // 0x352ef0: 0x0  nop
    ctx->pc = 0x352ef0u;
    // NOP
    // 0x352ef4: 0x0  nop
    ctx->pc = 0x352ef4u;
    // NOP
    // 0x352ef8: 0x0  nop
    ctx->pc = 0x352ef8u;
    // NOP
    // 0x352efc: 0x0  nop
    ctx->pc = 0x352efcu;
    // NOP
    // 0x352f00: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x352F00u;
    {
        const bool branch_taken_0x352f00 = (false);
        if (branch_taken_0x352f00) {
            ctx->pc = 0x352EECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352eec;
        }
    }
    ctx->pc = 0x352F08u;
label_352f08:
    // 0x352f08: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x352f08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x352f0c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x352f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x352f10: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x352f10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    // 0x352f14: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x352f14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x352f18: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x352f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x352f1c: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x352f1cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x352f20: 0xf  sync
    ctx->pc = 0x352f20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352f24: 0x40f  sync.p
    ctx->pc = 0x352f24u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352f28: 0x26104000  addiu       $s0, $s0, 0x4000
    ctx->pc = 0x352f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16384));
    // 0x352f2c: 0x2631fc00  addiu       $s1, $s1, -0x400
    ctx->pc = 0x352f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966272));
label_352f30:
    // 0x352f30: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x352f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x352f34: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x352f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x352f38: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x352F38u;
    {
        const bool branch_taken_0x352f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352f38) {
            ctx->pc = 0x352F68u;
            goto label_352f68;
        }
    }
    ctx->pc = 0x352F40u;
    // 0x352f40: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x352f40u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x352f44: 0xf  sync
    ctx->pc = 0x352f44u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352f48: 0x40f  sync.p
    ctx->pc = 0x352f48u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_352f4c:
    // 0x352f4c: 0x0  nop
    ctx->pc = 0x352f4cu;
    // NOP
    // 0x352f50: 0x0  nop
    ctx->pc = 0x352f50u;
    // NOP
    // 0x352f54: 0x0  nop
    ctx->pc = 0x352f54u;
    // NOP
    // 0x352f58: 0x0  nop
    ctx->pc = 0x352f58u;
    // NOP
    // 0x352f5c: 0x0  nop
    ctx->pc = 0x352f5cu;
    // NOP
    // 0x352f60: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x352F60u;
    {
        const bool branch_taken_0x352f60 = (false);
        if (branch_taken_0x352f60) {
            ctx->pc = 0x352F4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352f4c;
        }
    }
    ctx->pc = 0x352F68u;
label_352f68:
    // 0x352f68: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x352f68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x352f6c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x352f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x352f70: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x352f70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    // 0x352f74: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x352f74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x352f78: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x352f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x352f7c: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x352f7cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x352f80: 0xf  sync
    ctx->pc = 0x352f80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352f84: 0x40f  sync.p
    ctx->pc = 0x352f84u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352f88: 0x2631fc00  addiu       $s1, $s1, -0x400
    ctx->pc = 0x352f88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966272));
    // 0x352f8c: 0x2a220401  slti        $v0, $s1, 0x401
    ctx->pc = 0x352f8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x352f90: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x352F90u;
    {
        const bool branch_taken_0x352f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x352F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352F90u;
        // 0x352f94: 0x26104000  addiu       $s0, $s0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352f90) {
            ctx->pc = 0x353128u;
            goto label_353128;
        }
    }
    ctx->pc = 0x352F98u;
label_352f98:
    // 0x352f98: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x352f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x352f9c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x352f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x352fa0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x352FA0u;
    {
        const bool branch_taken_0x352fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352fa0) {
            ctx->pc = 0x352FD0u;
            goto label_352fd0;
        }
    }
    ctx->pc = 0x352FA8u;
    // 0x352fa8: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x352fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x352fac: 0xf  sync
    ctx->pc = 0x352facu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352fb0: 0x40f  sync.p
    ctx->pc = 0x352fb0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_352fb4:
    // 0x352fb4: 0x0  nop
    ctx->pc = 0x352fb4u;
    // NOP
    // 0x352fb8: 0x0  nop
    ctx->pc = 0x352fb8u;
    // NOP
    // 0x352fbc: 0x0  nop
    ctx->pc = 0x352fbcu;
    // NOP
    // 0x352fc0: 0x0  nop
    ctx->pc = 0x352fc0u;
    // NOP
    // 0x352fc4: 0x0  nop
    ctx->pc = 0x352fc4u;
    // NOP
    // 0x352fc8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x352FC8u;
    {
        const bool branch_taken_0x352fc8 = (false);
        if (branch_taken_0x352fc8) {
            ctx->pc = 0x352FB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352fb4;
        }
    }
    ctx->pc = 0x352FD0u;
label_352fd0:
    // 0x352fd0: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x352fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x352fd4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x352fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x352fd8: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x352fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    // 0x352fdc: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x352fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x352fe0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x352fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x352fe4: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x352fe4u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x352fe8: 0xf  sync
    ctx->pc = 0x352fe8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352fec: 0x40f  sync.p
    ctx->pc = 0x352fecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x352ff0: 0x26034000  addiu       $v1, $s0, 0x4000
    ctx->pc = 0x352ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16384));
    // 0x352ff4: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x352ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x352ff8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x352ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x352ffc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x352FFCu;
    {
        const bool branch_taken_0x352ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352ffc) {
            ctx->pc = 0x353030u;
            goto label_353030;
        }
    }
    ctx->pc = 0x353004u;
    // 0x353004: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x353004u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x353008: 0xf  sync
    ctx->pc = 0x353008u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35300c: 0x40f  sync.p
    ctx->pc = 0x35300cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_353010:
    // 0x353010: 0x0  nop
    ctx->pc = 0x353010u;
    // NOP
    // 0x353014: 0x0  nop
    ctx->pc = 0x353014u;
    // NOP
    // 0x353018: 0x0  nop
    ctx->pc = 0x353018u;
    // NOP
    // 0x35301c: 0x0  nop
    ctx->pc = 0x35301cu;
    // NOP
    // 0x353020: 0x0  nop
    ctx->pc = 0x353020u;
    // NOP
    // 0x353024: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x353024u;
    {
        const bool branch_taken_0x353024 = (false);
        if (branch_taken_0x353024) {
            ctx->pc = 0x353010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353010;
        }
    }
    ctx->pc = 0x35302Cu;
    // 0x35302c: 0x0  nop
    ctx->pc = 0x35302cu;
    // NOP
label_353030:
    // 0x353030: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x353030u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x353034: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x353034u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x353038: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x353038u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x35303c: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x35303cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x353040: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x353040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x353044: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x353044u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x353048: 0xf  sync
    ctx->pc = 0x353048u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35304c: 0x40f  sync.p
    ctx->pc = 0x35304cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353050: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x353050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x353054: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x353054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x353058: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x353058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x35305c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35305cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x353060: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x353060u;
    {
        const bool branch_taken_0x353060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353060) {
            ctx->pc = 0x353090u;
            goto label_353090;
        }
    }
    ctx->pc = 0x353068u;
    // 0x353068: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x353068u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x35306c: 0xf  sync
    ctx->pc = 0x35306cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353070: 0x40f  sync.p
    ctx->pc = 0x353070u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_353074:
    // 0x353074: 0x0  nop
    ctx->pc = 0x353074u;
    // NOP
    // 0x353078: 0x0  nop
    ctx->pc = 0x353078u;
    // NOP
    // 0x35307c: 0x0  nop
    ctx->pc = 0x35307cu;
    // NOP
    // 0x353080: 0x0  nop
    ctx->pc = 0x353080u;
    // NOP
    // 0x353084: 0x0  nop
    ctx->pc = 0x353084u;
    // NOP
    // 0x353088: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x353088u;
    {
        const bool branch_taken_0x353088 = (false);
        if (branch_taken_0x353088) {
            ctx->pc = 0x353074u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353074;
        }
    }
    ctx->pc = 0x353090u;
label_353090:
    // 0x353090: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x353090u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x353094: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x353094u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x353098: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x353098u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x35309c: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x35309cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x3530a0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x3530a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x3530a4: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x3530a4u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x3530a8: 0xf  sync
    ctx->pc = 0x3530a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3530ac: 0x40f  sync.p
    ctx->pc = 0x3530acu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3530b0: 0x3403c000  ori         $v1, $zero, 0xC000
    ctx->pc = 0x3530b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x3530b4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3530b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3530b8: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x3530b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3530bc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3530bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3530c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3530C0u;
    {
        const bool branch_taken_0x3530c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3530c0) {
            ctx->pc = 0x3530F0u;
            goto label_3530f0;
        }
    }
    ctx->pc = 0x3530C8u;
    // 0x3530c8: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x3530c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x3530cc: 0xf  sync
    ctx->pc = 0x3530ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3530d0: 0x40f  sync.p
    ctx->pc = 0x3530d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3530d4:
    // 0x3530d4: 0x0  nop
    ctx->pc = 0x3530d4u;
    // NOP
    // 0x3530d8: 0x0  nop
    ctx->pc = 0x3530d8u;
    // NOP
    // 0x3530dc: 0x0  nop
    ctx->pc = 0x3530dcu;
    // NOP
    // 0x3530e0: 0x0  nop
    ctx->pc = 0x3530e0u;
    // NOP
    // 0x3530e4: 0x0  nop
    ctx->pc = 0x3530e4u;
    // NOP
    // 0x3530e8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x3530E8u;
    {
        const bool branch_taken_0x3530e8 = (false);
        if (branch_taken_0x3530e8) {
            ctx->pc = 0x3530D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3530d4;
        }
    }
    ctx->pc = 0x3530F0u;
label_3530f0:
    // 0x3530f0: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x3530f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x3530f4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x3530f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x3530f8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x3530f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x3530fc: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x3530fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x353100: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x353100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x353104: 0xac24d000  sw          $a0, -0x3000($at)
    ctx->pc = 0x353104u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x353108: 0xf  sync
    ctx->pc = 0x353108u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35310c: 0x40f  sync.p
    ctx->pc = 0x35310cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353110: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x353110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x353114: 0x2631f000  addiu       $s1, $s1, -0x1000
    ctx->pc = 0x353114u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963200));
    // 0x353118: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x353118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x35311c: 0x2a220401  slti        $v0, $s1, 0x401
    ctx->pc = 0x35311cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x353120: 0x1040ff9d  beqz        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x353120u;
    {
        const bool branch_taken_0x353120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353120) {
            ctx->pc = 0x352F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352f98;
        }
    }
    ctx->pc = 0x353128u;
label_353128:
    // 0x353128: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x353128u;
    {
        const bool branch_taken_0x353128 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353128u;
        // 0x35312c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353128) {
            ctx->pc = 0x3531C8u;
            goto label_3531c8;
        }
    }
    ctx->pc = 0x353130u;
    // 0x353130: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x353130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x353134: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x353134u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x353138: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x353138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x35313c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x35313Cu;
    {
        const bool branch_taken_0x35313c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x353140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35313Cu;
        // 0x353140: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35313c) {
            ctx->pc = 0x353178u;
            goto label_353178;
        }
    }
    ctx->pc = 0x353144u;
    // 0x353144: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x353144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x353148: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x353148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35314c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35314cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x353150: 0xf  sync
    ctx->pc = 0x353150u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353154: 0x40f  sync.p
    ctx->pc = 0x353154u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_353158:
    // 0x353158: 0x0  nop
    ctx->pc = 0x353158u;
    // NOP
    // 0x35315c: 0x0  nop
    ctx->pc = 0x35315cu;
    // NOP
    // 0x353160: 0x0  nop
    ctx->pc = 0x353160u;
    // NOP
    // 0x353164: 0x0  nop
    ctx->pc = 0x353164u;
    // NOP
    // 0x353168: 0x0  nop
    ctx->pc = 0x353168u;
    // NOP
    // 0x35316c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35316Cu;
    {
        const bool branch_taken_0x35316c = (false);
        if (branch_taken_0x35316c) {
            ctx->pc = 0x353158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353158;
        }
    }
    ctx->pc = 0x353174u;
    // 0x353174: 0x0  nop
    ctx->pc = 0x353174u;
    // NOP
label_353178:
    // 0x353178: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x353178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35317c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x35317cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x353180: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x353180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x353184: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x353184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x353188: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x353188u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x35318c: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x35318cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x353190: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x353190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x353194: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x353194u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 0)); // MMIO: 0x1000d080
    // 0x353198: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x353198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
    // 0x35319c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35319cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3531a0: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x3531a0u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 16)); // MMIO: 0x1000d010
    // 0x3531a4: 0x3442d020  ori         $v0, $v0, 0xD020
    ctx->pc = 0x3531a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53280);
    // 0x3531a8: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3531a8u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 17)); // MMIO: 0x1000d020
    // 0x3531ac: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x3531acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x3531b0: 0xac25d000  sw          $a1, -0x3000($at)
    ctx->pc = 0x3531b0u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x1000d000
    // 0x3531b4: 0xf  sync
    ctx->pc = 0x3531b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3531b8: 0x40f  sync.p
    ctx->pc = 0x3531b8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3531bc: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x3531bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x3531c0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3531c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3531c4: 0x0  nop
    ctx->pc = 0x3531c4u;
    // NOP
label_3531c8:
    // 0x3531c8: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3531C8u;
    {
        const bool branch_taken_0x3531c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3531c8) {
            ctx->pc = 0x3531CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3531C8u;
            // 0x3531cc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3531E0u;
            goto label_3531e0;
        }
    }
    ctx->pc = 0x3531D0u;
    // 0x3531d0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x3531d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x3531d4: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x3531d4u;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x70000000u));
    // 0x3531d8: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x3531d8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x3531dc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3531dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3531e0:
    // 0x3531e0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3531e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3531e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3531e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3531e8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3531e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3531ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3531ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3531f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3531F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3531F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3531F0u;
        // 0x3531f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3531F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3531F8u;
}
