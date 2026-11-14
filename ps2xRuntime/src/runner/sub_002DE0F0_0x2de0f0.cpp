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

// Function: sub_002DE0F0
// Address: 0x2de0f0 - 0x2de200
void sub_002DE0F0_0x2de0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE0F0_0x2de0f0");
#endif

    switch (ctx->pc) {
        case 0x2de124u: goto label_2de124;
        case 0x2de138u: goto label_2de138;
        case 0x2de15cu: goto label_2de15c;
        case 0x2de178u: goto label_2de178;
        case 0x2de190u: goto label_2de190;
        case 0x2de1b8u: goto label_2de1b8;
        case 0x2de1c8u: goto label_2de1c8;
        case 0x2de1e4u: goto label_2de1e4;
        default: break;
    }

    ctx->pc = 0x2de0f0u;

    // 0x2de0f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2de0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2de0f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2de0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2de0f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2de0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2de0fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2de0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2de100: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2de100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2de104: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2de104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2de108: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2de108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2de10c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2de10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2de110: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2de110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2de114: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2de114u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2de118: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2de118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2de11c: 0xc0b77fc  jal         func_2DDFF0
    ctx->pc = 0x2DE11Cu;
    SET_GPR_U32(ctx, 31, 0x2DE124u);
    ctx->pc = 0x2DDFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDFF0u, 0x2DE11Cu, 0x2DE124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE124u;
label_2de124:
    // 0x2de124: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2de124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2de128: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2de128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2de12c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2de12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2de130: 0xc041954  jal         func_106550
    ctx->pc = 0x2DE130u;
    SET_GPR_U32(ctx, 31, 0x2DE138u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x2DE130u, 0x2DE138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE138u;
label_2de138:
    // 0x2de138: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2de138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2de13c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2de13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2de140: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2de140u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2de144: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2de144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2de148: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2de148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2de14c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2de14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de150: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2de150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de154: 0xc0b7974  jal         func_2DE5D0
    ctx->pc = 0x2DE154u;
    SET_GPR_U32(ctx, 31, 0x2DE15Cu);
    ctx->pc = 0x2DE5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE5D0u, 0x2DE154u, 0x2DE15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE15Cu;
label_2de15c:
    // 0x2de15c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2de15cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de160: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2de160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2de164: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2de164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2de168: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2de168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2de16c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2de16cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de170: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2DE170u;
    SET_GPR_U32(ctx, 31, 0x2DE178u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2DE170u, 0x2DE178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE178u;
label_2de178:
    // 0x2de178: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2de178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de17c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de180: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2de180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2de184: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2de184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2de188: 0xc0b78b4  jal         func_2DE2D0
    ctx->pc = 0x2DE188u;
    SET_GPR_U32(ctx, 31, 0x2DE190u);
    ctx->pc = 0x2DE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2D0u, 0x2DE188u, 0x2DE190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE190u;
label_2de190:
    // 0x2de190: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2de190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de194: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x2de194u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2de198: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DE198u;
    {
        const bool branch_taken_0x2de198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de198) {
            ctx->pc = 0x2DE1BCu;
            goto label_2de1bc;
        }
    }
    ctx->pc = 0x2DE1A0u;
    // 0x2de1a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2de1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2de1a4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2de1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2de1a8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2de1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2de1ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2de1acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de1b0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2DE1B0u;
    SET_GPR_U32(ctx, 31, 0x2DE1B8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2DE1B0u, 0x2DE1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE1B8u;
label_2de1b8:
    // 0x2de1b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2de1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de1bc:
    // 0x2de1bc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2de1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2de1c0: 0xc0b7894  jal         func_2DE250
    ctx->pc = 0x2DE1C0u;
    SET_GPR_U32(ctx, 31, 0x2DE1C8u);
    ctx->pc = 0x2DE250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE250u, 0x2DE1C0u, 0x2DE1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE1C8u;
label_2de1c8:
    // 0x2de1c8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2de1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2de1cc: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2de1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2de1d0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2de1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2de1d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2de1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de1d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2de1d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de1dc: 0xc0b7880  jal         func_2DE200
    ctx->pc = 0x2DE1DCu;
    SET_GPR_U32(ctx, 31, 0x2DE1E4u);
    ctx->pc = 0x2DE200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE200u, 0x2DE1DCu, 0x2DE1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE1E4u;
label_2de1e4:
    // 0x2de1e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2de1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de1e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2de1e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de1ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2de1ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de1f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2de1f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de1f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2de1f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2de1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE200u;
}
