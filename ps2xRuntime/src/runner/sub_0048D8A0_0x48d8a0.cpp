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

// Function: sub_0048D8A0
// Address: 0x48d8a0 - 0x48da00
void sub_0048D8A0_0x48d8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D8A0_0x48d8a0");
#endif

    switch (ctx->pc) {
        case 0x48d8d4u: goto label_48d8d4;
        case 0x48d8e8u: goto label_48d8e8;
        case 0x48d90cu: goto label_48d90c;
        case 0x48d934u: goto label_48d934;
        case 0x48d958u: goto label_48d958;
        case 0x48d980u: goto label_48d980;
        case 0x48d9b0u: goto label_48d9b0;
        case 0x48d9c0u: goto label_48d9c0;
        case 0x48d9e4u: goto label_48d9e4;
        default: break;
    }

    ctx->pc = 0x48d8a0u;

    // 0x48d8a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x48d8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x48d8a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x48d8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x48d8a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48d8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x48d8ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48d8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48d8b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48d8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48d8b4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x48d8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x48d8b8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x48d8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x48d8bc: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x48d8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x48d8c0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x48d8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x48d8c4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x48d8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x48d8c8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x48d8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48d8cc: 0xc1234c0  jal         func_48D300
    ctx->pc = 0x48D8CCu;
    SET_GPR_U32(ctx, 31, 0x48D8D4u);
    ctx->pc = 0x48D300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D300u, 0x48D8CCu, 0x48D8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D8D4u;
label_48d8d4:
    // 0x48d8d4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x48d8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x48d8d8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x48d8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x48d8dc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x48d8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x48d8e0: 0xc041954  jal         func_106550
    ctx->pc = 0x48D8E0u;
    SET_GPR_U32(ctx, 31, 0x48D8E8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x48D8E0u, 0x48D8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D8E8u;
label_48d8e8:
    // 0x48d8e8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x48d8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x48d8ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48d8f0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x48d8f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48d8f4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x48d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48d8f8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x48d8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x48d8fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x48d8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d900: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x48d900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d904: 0xc123710  jal         func_48DC40
    ctx->pc = 0x48D904u;
    SET_GPR_U32(ctx, 31, 0x48D90Cu);
    ctx->pc = 0x48DC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DC40u, 0x48D904u, 0x48D90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D90Cu;
label_48d90c:
    // 0x48d90c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x48d90cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d910: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x48d910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d914: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x48d914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48d918: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x48d918u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x48d91c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48d91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48d920: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x48d920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48d924: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x48d924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d928: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x48d928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x48d92c: 0xc1236d0  jal         func_48DB40
    ctx->pc = 0x48D92Cu;
    SET_GPR_U32(ctx, 31, 0x48D934u);
    ctx->pc = 0x48DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DB40u, 0x48D92Cu, 0x48D934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D934u;
label_48d934:
    // 0x48d934: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48d934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d938: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x48d938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x48d93c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48d93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48d940: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x48D940u;
    {
        const bool branch_taken_0x48d940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x48d940) {
            ctx->pc = 0x48D964u;
            goto label_48d964;
        }
    }
    ctx->pc = 0x48D948u;
    // 0x48d948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48d948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d94c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x48d94cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x48d950: 0xc1236f0  jal         func_48DBC0
    ctx->pc = 0x48D950u;
    SET_GPR_U32(ctx, 31, 0x48D958u);
    ctx->pc = 0x48DBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DBC0u, 0x48D950u, 0x48D958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D958u;
label_48d958:
    // 0x48d958: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x48d958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x48d95c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x48D95Cu;
    {
        const bool branch_taken_0x48d95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d95c) {
            ctx->pc = 0x48D984u;
            goto label_48d984;
        }
    }
    ctx->pc = 0x48D964u;
label_48d964:
    // 0x48d964: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x48d964u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x48d968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48d968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d96c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x48d96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x48d970: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x48d970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x48d974: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x48d974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x48d978: 0xc1236b0  jal         func_48DAC0
    ctx->pc = 0x48D978u;
    SET_GPR_U32(ctx, 31, 0x48D980u);
    ctx->pc = 0x48DAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DAC0u, 0x48D978u, 0x48D980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D980u;
label_48d980:
    // 0x48d980: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48d980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48d984:
    // 0x48d984: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x48d984u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x48d988: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x48D988u;
    {
        const bool branch_taken_0x48d988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48d988) {
            ctx->pc = 0x48D9B4u;
            goto label_48d9b4;
        }
    }
    ctx->pc = 0x48D990u;
    // 0x48d990: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x48d990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48d994: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x48d994u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x48d998: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x48d998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48d99c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x48d99cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48d9a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x48d9a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d9a4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x48d9a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48d9a8: 0xc1236d0  jal         func_48DB40
    ctx->pc = 0x48D9A8u;
    SET_GPR_U32(ctx, 31, 0x48D9B0u);
    ctx->pc = 0x48DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DB40u, 0x48D9A8u, 0x48D9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D9B0u;
label_48d9b0:
    // 0x48d9b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48d9b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48d9b4:
    // 0x48d9b4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x48d9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48d9b8: 0xc123694  jal         func_48DA50
    ctx->pc = 0x48D9B8u;
    SET_GPR_U32(ctx, 31, 0x48D9C0u);
    ctx->pc = 0x48DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DA50u, 0x48D9B8u, 0x48D9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D9C0u;
label_48d9c0:
    // 0x48d9c0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x48d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x48d9c4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x48d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x48d9c8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x48d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x48d9cc: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x48d9ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x48d9d0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x48d9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48d9d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x48d9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d9d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x48d9d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d9dc: 0xc123680  jal         func_48DA00
    ctx->pc = 0x48D9DCu;
    SET_GPR_U32(ctx, 31, 0x48D9E4u);
    ctx->pc = 0x48DA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DA00u, 0x48D9DCu, 0x48D9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D9E4u;
label_48d9e4:
    // 0x48d9e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x48d9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48d9e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48d9e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48d9ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48d9ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48d9f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48d9f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48d9f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x48d9f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x48d9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x48D9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48DA00u;
}
