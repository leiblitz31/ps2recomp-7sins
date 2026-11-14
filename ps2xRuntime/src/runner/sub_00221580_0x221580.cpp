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

// Function: sub_00221580
// Address: 0x221580 - 0x221650
void sub_00221580_0x221580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221580_0x221580");
#endif

    switch (ctx->pc) {
        case 0x22159cu: goto label_22159c;
        case 0x2215ccu: goto label_2215cc;
        case 0x2215dcu: goto label_2215dc;
        case 0x2215f4u: goto label_2215f4;
        case 0x221610u: goto label_221610;
        case 0x221620u: goto label_221620;
        default: break;
    }

    ctx->pc = 0x221580u;

    // 0x221580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x221580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x221584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x221584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x221588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x221588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22158c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22158cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x221590: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x221590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221594: 0xc086194  jal         func_218650
    ctx->pc = 0x221594u;
    SET_GPR_U32(ctx, 31, 0x22159Cu);
    ctx->pc = 0x218650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218650u, 0x221594u, 0x22159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22159Cu;
label_22159c:
    // 0x22159c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x22159cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2215a0: 0x246352a0  addiu       $v1, $v1, 0x52A0
    ctx->pc = 0x2215a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21152));
    // 0x2215a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2215a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2215a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2215a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2215ac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2215acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2215b0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2215b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2215b4: 0x8f82c034  lw          $v0, -0x3FCC($gp)
    ctx->pc = 0x2215b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
    // 0x2215b8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2215b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2215bc: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x2215bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
    // 0x2215c0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2215c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2215c4: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2215C4u;
    SET_GPR_U32(ctx, 31, 0x2215CCu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2215C4u, 0x2215CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2215CCu;
label_2215cc:
    // 0x2215cc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2215ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2215d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2215d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2215d4: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2215D4u;
    SET_GPR_U32(ctx, 31, 0x2215DCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2215D4u, 0x2215DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2215DCu;
label_2215dc:
    // 0x2215dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2215dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2215e0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2215E0u;
    {
        const bool branch_taken_0x2215e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2215e0) {
            ctx->pc = 0x2215F8u;
            goto label_2215f8;
        }
    }
    ctx->pc = 0x2215E8u;
    // 0x2215e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2215e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2215ec: 0xc088710  jal         func_221C40
    ctx->pc = 0x2215ECu;
    SET_GPR_U32(ctx, 31, 0x2215F4u);
    ctx->pc = 0x221C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C40u, 0x2215ECu, 0x2215F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2215F4u;
label_2215f4:
    // 0x2215f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2215f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2215f8:
    // 0x2215f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2215f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2215fc: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x2215fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x221600: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x221600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221604: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x221604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x221608: 0xc088698  jal         func_221A60
    ctx->pc = 0x221608u;
    SET_GPR_U32(ctx, 31, 0x221610u);
    ctx->pc = 0x221A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A60u, 0x221608u, 0x221610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221610u;
label_221610:
    // 0x221610: 0x8f84bb7c  lw          $a0, -0x4484($gp)
    ctx->pc = 0x221610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949756)));
    // 0x221614: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x221614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x221618: 0xc088594  jal         func_221650
    ctx->pc = 0x221618u;
    SET_GPR_U32(ctx, 31, 0x221620u);
    ctx->pc = 0x221650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221650u, 0x221618u, 0x221620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221620u;
label_221620:
    // 0x221620: 0x8f83c034  lw          $v1, -0x3FCC($gp)
    ctx->pc = 0x221620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
    // 0x221624: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x221624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x221628: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x221628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22162c: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x22162cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
    // 0x221630: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x221630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221634: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x221634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221638: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x221638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22163c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22163cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x221640: 0x3e00008  jr          $ra
    ctx->pc = 0x221640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221648u;
    // 0x221648: 0x0  nop
    ctx->pc = 0x221648u;
    // NOP
    // 0x22164c: 0x0  nop
    ctx->pc = 0x22164cu;
    // NOP
    ctx->pc = 0x221650u;
}
