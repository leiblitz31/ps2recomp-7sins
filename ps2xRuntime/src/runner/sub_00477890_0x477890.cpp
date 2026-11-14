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

// Function: sub_00477890
// Address: 0x477890 - 0x4779f0
void sub_00477890_0x477890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477890_0x477890");
#endif

    switch (ctx->pc) {
        case 0x4778c4u: goto label_4778c4;
        case 0x4778d8u: goto label_4778d8;
        case 0x4778fcu: goto label_4778fc;
        case 0x477924u: goto label_477924;
        case 0x477948u: goto label_477948;
        case 0x477970u: goto label_477970;
        case 0x4779a0u: goto label_4779a0;
        case 0x4779b0u: goto label_4779b0;
        case 0x4779ccu: goto label_4779cc;
        default: break;
    }

    ctx->pc = 0x477890u;

    // 0x477890: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x477890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x477894: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x477894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x477898: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x477898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x47789c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47789cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4778a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4778a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4778a4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x4778a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x4778a8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x4778a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x4778ac: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x4778acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x4778b0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x4778b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x4778b4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x4778b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x4778b8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x4778b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4778bc: 0xc11def0  jal         func_477BC0
    ctx->pc = 0x4778BCu;
    SET_GPR_U32(ctx, 31, 0x4778C4u);
    ctx->pc = 0x477BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477BC0u, 0x4778BCu, 0x4778C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4778C4u;
label_4778c4:
    // 0x4778c4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x4778c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x4778c8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x4778c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x4778cc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x4778ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x4778d0: 0xc041954  jal         func_106550
    ctx->pc = 0x4778D0u;
    SET_GPR_U32(ctx, 31, 0x4778D8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x4778D0u, 0x4778D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4778D8u;
label_4778d8:
    // 0x4778d8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x4778d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x4778dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4778dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4778e0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x4778e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4778e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4778e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4778e8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x4778e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x4778ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4778ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4778f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4778f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4778f4: 0xc11e1fc  jal         func_4787F0
    ctx->pc = 0x4778F4u;
    SET_GPR_U32(ctx, 31, 0x4778FCu);
    ctx->pc = 0x4787F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4787F0u, 0x4778F4u, 0x4778FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4778FCu;
label_4778fc:
    // 0x4778fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4778fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477900: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x477900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477904: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x477904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x477908: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x477908u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x47790c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x47790cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x477910: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x477910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x477914: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x477914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477918: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x477918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x47791c: 0xc11ded0  jal         func_477B40
    ctx->pc = 0x47791Cu;
    SET_GPR_U32(ctx, 31, 0x477924u);
    ctx->pc = 0x477B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477B40u, 0x47791Cu, 0x477924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477924u;
label_477924:
    // 0x477924: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x477924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477928: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x477928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x47792c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47792cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x477930: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x477930u;
    {
        const bool branch_taken_0x477930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x477930) {
            ctx->pc = 0x477954u;
            goto label_477954;
        }
    }
    ctx->pc = 0x477938u;
    // 0x477938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x477938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47793c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x47793cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x477940: 0xc11df00  jal         func_477C00
    ctx->pc = 0x477940u;
    SET_GPR_U32(ctx, 31, 0x477948u);
    ctx->pc = 0x477C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477C00u, 0x477940u, 0x477948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477948u;
label_477948:
    // 0x477948: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x477948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x47794c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x47794Cu;
    {
        const bool branch_taken_0x47794c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47794c) {
            ctx->pc = 0x477974u;
            goto label_477974;
        }
    }
    ctx->pc = 0x477954u;
label_477954:
    // 0x477954: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x477954u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x477958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x477958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47795c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x47795cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x477960: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x477960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x477964: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x477964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x477968: 0xc11deb0  jal         func_477AC0
    ctx->pc = 0x477968u;
    SET_GPR_U32(ctx, 31, 0x477970u);
    ctx->pc = 0x477AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477AC0u, 0x477968u, 0x477970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477970u;
label_477970:
    // 0x477970: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x477970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_477974:
    // 0x477974: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x477974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x477978: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x477978u;
    {
        const bool branch_taken_0x477978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x477978) {
            ctx->pc = 0x4779A4u;
            goto label_4779a4;
        }
    }
    ctx->pc = 0x477980u;
    // 0x477980: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x477980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x477984: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x477984u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x477988: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x477988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x47798c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x47798cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x477990: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x477990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477994: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x477994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x477998: 0xc11ded0  jal         func_477B40
    ctx->pc = 0x477998u;
    SET_GPR_U32(ctx, 31, 0x4779A0u);
    ctx->pc = 0x477B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477B40u, 0x477998u, 0x4779A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4779A0u;
label_4779a0:
    // 0x4779a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4779a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4779a4:
    // 0x4779a4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x4779a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4779a8: 0xc11de90  jal         func_477A40
    ctx->pc = 0x4779A8u;
    SET_GPR_U32(ctx, 31, 0x4779B0u);
    ctx->pc = 0x477A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477A40u, 0x4779A8u, 0x4779B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4779B0u;
label_4779b0:
    // 0x4779b0: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x4779b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x4779b4: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x4779b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4779b8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x4779b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4779bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4779bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4779c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4779c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4779c4: 0xc11de7c  jal         func_4779F0
    ctx->pc = 0x4779C4u;
    SET_GPR_U32(ctx, 31, 0x4779CCu);
    ctx->pc = 0x4779F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4779F0u, 0x4779C4u, 0x4779CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4779CCu;
label_4779cc:
    // 0x4779cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4779ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4779d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4779d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4779d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4779d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4779d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4779d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4779dc: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x4779dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x4779e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4779E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4779E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4779E8u;
    // 0x4779e8: 0x0  nop
    ctx->pc = 0x4779e8u;
    // NOP
    // 0x4779ec: 0x0  nop
    ctx->pc = 0x4779ecu;
    // NOP
    ctx->pc = 0x4779f0u;
}
