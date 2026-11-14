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

// Function: sub_00450360
// Address: 0x450360 - 0x450430
void sub_00450360_0x450360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00450360_0x450360");
#endif

    switch (ctx->pc) {
        case 0x45037cu: goto label_45037c;
        case 0x45038cu: goto label_45038c;
        case 0x4503a0u: goto label_4503a0;
        case 0x4503b4u: goto label_4503b4;
        case 0x4503ccu: goto label_4503cc;
        case 0x4503dcu: goto label_4503dc;
        case 0x4503ecu: goto label_4503ec;
        case 0x450400u: goto label_450400;
        default: break;
    }

    ctx->pc = 0x450360u;

    // 0x450360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x450360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x450364: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x450364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x450368: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x450368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45036c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x45036cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x450370: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x450370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x450374: 0xc113f4c  jal         func_44FD30
    ctx->pc = 0x450374u;
    SET_GPR_U32(ctx, 31, 0x45037Cu);
    ctx->pc = 0x44FD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FD30u, 0x450374u, 0x45037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45037Cu;
label_45037c:
    // 0x45037c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x45037cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x450380: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x450380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450384: 0xc113f54  jal         func_44FD50
    ctx->pc = 0x450384u;
    SET_GPR_U32(ctx, 31, 0x45038Cu);
    ctx->pc = 0x44FD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FD50u, 0x450384u, 0x45038Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45038Cu;
label_45038c:
    // 0x45038c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45038cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450390: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x450390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x450394: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x450394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450398: 0xc1146f4  jal         func_451BD0
    ctx->pc = 0x450398u;
    SET_GPR_U32(ctx, 31, 0x4503A0u);
    ctx->pc = 0x451BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x451BD0u, 0x450398u, 0x4503A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4503A0u;
label_4503a0:
    // 0x4503a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4503a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4503a4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x4503a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x4503a8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4503a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4503ac: 0xc113f40  jal         func_44FD00
    ctx->pc = 0x4503ACu;
    SET_GPR_U32(ctx, 31, 0x4503B4u);
    ctx->pc = 0x44FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FD00u, 0x4503ACu, 0x4503B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4503B4u;
label_4503b4:
    // 0x4503b4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x4503b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4503b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4503b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4503bc: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x4503bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x4503c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4503c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4503c4: 0xc113f4c  jal         func_44FD30
    ctx->pc = 0x4503C4u;
    SET_GPR_U32(ctx, 31, 0x4503CCu);
    ctx->pc = 0x44FD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FD30u, 0x4503C4u, 0x4503CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4503CCu;
label_4503cc:
    // 0x4503cc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4503ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4503d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4503d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4503d4: 0xc113f54  jal         func_44FD50
    ctx->pc = 0x4503D4u;
    SET_GPR_U32(ctx, 31, 0x4503DCu);
    ctx->pc = 0x44FD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FD50u, 0x4503D4u, 0x4503DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4503DCu;
label_4503dc:
    // 0x4503dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4503dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4503e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4503e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4503e4: 0xc041874  jal         func_1061D0
    ctx->pc = 0x4503E4u;
    SET_GPR_U32(ctx, 31, 0x4503ECu);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x4503E4u, 0x4503ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4503ECu;
label_4503ec:
    // 0x4503ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4503ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4503f0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4503f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x4503f4: 0x24a5da40  addiu       $a1, $a1, -0x25C0
    ctx->pc = 0x4503f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957632));
    // 0x4503f8: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x4503F8u;
    SET_GPR_U32(ctx, 31, 0x450400u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x4503F8u, 0x450400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450400u;
label_450400:
    // 0x450400: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x450400u;
    {
        const bool branch_taken_0x450400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x450400) {
            ctx->pc = 0x450414u;
            goto label_450414;
        }
    }
    ctx->pc = 0x450408u;
    // 0x450408: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x450408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45040c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x45040cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x450410: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x450410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_450414:
    // 0x450414: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x450414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x450418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x450418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45041c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x45041cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x450420: 0x3e00008  jr          $ra
    ctx->pc = 0x450420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x450420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x450428u;
    // 0x450428: 0x0  nop
    ctx->pc = 0x450428u;
    // NOP
    // 0x45042c: 0x0  nop
    ctx->pc = 0x45042cu;
    // NOP
    ctx->pc = 0x450430u;
}
