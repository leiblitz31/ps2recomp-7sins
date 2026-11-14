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

// Function: sub_0029A980
// Address: 0x29a980 - 0x29aa90
void sub_0029A980_0x29a980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A980_0x29a980");
#endif

    switch (ctx->pc) {
        case 0x29a9b4u: goto label_29a9b4;
        case 0x29a9c8u: goto label_29a9c8;
        case 0x29a9ecu: goto label_29a9ec;
        case 0x29aa08u: goto label_29aa08;
        case 0x29aa20u: goto label_29aa20;
        case 0x29aa48u: goto label_29aa48;
        case 0x29aa58u: goto label_29aa58;
        case 0x29aa74u: goto label_29aa74;
        default: break;
    }

    ctx->pc = 0x29a980u;

    // 0x29a980: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x29a980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x29a984: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29a984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29a988: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29a988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29a98c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29a98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29a990: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29a990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29a994: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x29a994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x29a998: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x29a998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x29a99c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x29a99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x29a9a0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x29a9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x29a9a4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x29a9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x29a9a8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x29a9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29a9ac: 0xc05afe0  jal         func_16BF80
    ctx->pc = 0x29A9ACu;
    SET_GPR_U32(ctx, 31, 0x29A9B4u);
    ctx->pc = 0x16BF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BF80u, 0x29A9ACu, 0x29A9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A9B4u;
label_29a9b4:
    // 0x29a9b4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x29a9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x29a9b8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x29a9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x29a9bc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x29a9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x29a9c0: 0xc041954  jal         func_106550
    ctx->pc = 0x29A9C0u;
    SET_GPR_U32(ctx, 31, 0x29A9C8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x29A9C0u, 0x29A9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A9C8u;
label_29a9c8:
    // 0x29a9c8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x29a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x29a9cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29a9d0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x29a9d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29a9d4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29a9d8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x29a9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x29a9dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29a9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a9e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29a9e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a9e4: 0xc0a6d14  jal         func_29B450
    ctx->pc = 0x29A9E4u;
    SET_GPR_U32(ctx, 31, 0x29A9ECu);
    ctx->pc = 0x29B450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B450u, 0x29A9E4u, 0x29A9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A9ECu;
label_29a9ec:
    // 0x29a9ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29a9ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a9f0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29a9f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29a9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29a9f8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x29a9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29a9fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29a9fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aa00: 0xc041934  jal         func_1064D0
    ctx->pc = 0x29AA00u;
    SET_GPR_U32(ctx, 31, 0x29AA08u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x29AA00u, 0x29AA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AA08u;
label_29aa08:
    // 0x29aa08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29aa08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aa0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29aa0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aa10: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x29aa10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29aa14: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x29aa14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29aa18: 0xc0a6ad8  jal         func_29AB60
    ctx->pc = 0x29AA18u;
    SET_GPR_U32(ctx, 31, 0x29AA20u);
    ctx->pc = 0x29AB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AB60u, 0x29AA18u, 0x29AA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AA20u;
label_29aa20:
    // 0x29aa20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29aa20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aa24: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x29aa24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29aa28: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29AA28u;
    {
        const bool branch_taken_0x29aa28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29aa28) {
            ctx->pc = 0x29AA4Cu;
            goto label_29aa4c;
        }
    }
    ctx->pc = 0x29AA30u;
    // 0x29aa30: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29aa34: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x29aa34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29aa38: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x29aa38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29aa3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29aa3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aa40: 0xc041934  jal         func_1064D0
    ctx->pc = 0x29AA40u;
    SET_GPR_U32(ctx, 31, 0x29AA48u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x29AA40u, 0x29AA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AA48u;
label_29aa48:
    // 0x29aa48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29aa48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29aa4c:
    // 0x29aa4c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x29aa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29aa50: 0xc0a6ab8  jal         func_29AAE0
    ctx->pc = 0x29AA50u;
    SET_GPR_U32(ctx, 31, 0x29AA58u);
    ctx->pc = 0x29AAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AAE0u, 0x29AA50u, 0x29AA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AA58u;
label_29aa58:
    // 0x29aa58: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x29aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29aa5c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x29aa5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29aa60: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x29aa60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29aa64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29aa64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aa68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29aa68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aa6c: 0xc0a6aa4  jal         func_29AA90
    ctx->pc = 0x29AA6Cu;
    SET_GPR_U32(ctx, 31, 0x29AA74u);
    ctx->pc = 0x29AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AA90u, 0x29AA6Cu, 0x29AA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AA74u;
label_29aa74:
    // 0x29aa74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29aa74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29aa78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29aa78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29aa7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29aa7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29aa80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29aa80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29aa84: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x29aa84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x29aa88: 0x3e00008  jr          $ra
    ctx->pc = 0x29AA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AA90u;
}
