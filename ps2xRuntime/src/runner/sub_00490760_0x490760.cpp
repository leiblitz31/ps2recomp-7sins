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

// Function: sub_00490760
// Address: 0x490760 - 0x490850
void sub_00490760_0x490760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490760_0x490760");
#endif

    switch (ctx->pc) {
        case 0x49077cu: goto label_49077c;
        case 0x49078cu: goto label_49078c;
        case 0x4907a4u: goto label_4907a4;
        case 0x4907b4u: goto label_4907b4;
        case 0x4907c8u: goto label_4907c8;
        case 0x4907d8u: goto label_4907d8;
        case 0x4907f0u: goto label_4907f0;
        case 0x490800u: goto label_490800;
        default: break;
    }

    ctx->pc = 0x490760u;

    // 0x490760: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x490760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x490764: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x490764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x490768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x490768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49076c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49076cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x490770: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x490770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x490774: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x490774u;
    SET_GPR_U32(ctx, 31, 0x49077Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x490774u, 0x49077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49077Cu;
label_49077c:
    // 0x49077c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x49077cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x490780: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x490780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490784: 0xc0400e0  jal         func_100380
    ctx->pc = 0x490784u;
    SET_GPR_U32(ctx, 31, 0x49078Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x490784u, 0x49078Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49078Cu;
label_49078c:
    // 0x49078c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x49078cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490790: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x490790u;
    {
        const bool branch_taken_0x490790 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x490790) {
            ctx->pc = 0x4907B8u;
            goto label_4907b8;
        }
    }
    ctx->pc = 0x490798u;
    // 0x490798: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x490798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x49079c: 0xc1242f4  jal         func_490BD0
    ctx->pc = 0x49079Cu;
    SET_GPR_U32(ctx, 31, 0x4907A4u);
    ctx->pc = 0x490BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490BD0u, 0x49079Cu, 0x4907A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4907A4u;
label_4907a4:
    // 0x4907a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4907a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4907a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4907a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4907ac: 0xc124288  jal         func_490A20
    ctx->pc = 0x4907ACu;
    SET_GPR_U32(ctx, 31, 0x4907B4u);
    ctx->pc = 0x490A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490A20u, 0x4907ACu, 0x4907B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4907B4u;
label_4907b4:
    // 0x4907b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4907b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4907b8:
    // 0x4907b8: 0xaf91c0f8  sw          $s1, -0x3F08($gp)
    ctx->pc = 0x4907b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951160), GPR_U32(ctx, 17));
    // 0x4907bc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x4907bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4907c0: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x4907C0u;
    SET_GPR_U32(ctx, 31, 0x4907C8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x4907C0u, 0x4907C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4907C8u;
label_4907c8:
    // 0x4907c8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x4907c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4907cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4907ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4907d0: 0xc0400e0  jal         func_100380
    ctx->pc = 0x4907D0u;
    SET_GPR_U32(ctx, 31, 0x4907D8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x4907D0u, 0x4907D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4907D8u;
label_4907d8:
    // 0x4907d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4907d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4907dc: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4907DCu;
    {
        const bool branch_taken_0x4907dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4907dc) {
            ctx->pc = 0x490804u;
            goto label_490804;
        }
    }
    ctx->pc = 0x4907E4u;
    // 0x4907e4: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x4907e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x4907e8: 0xc124280  jal         func_490A00
    ctx->pc = 0x4907E8u;
    SET_GPR_U32(ctx, 31, 0x4907F0u);
    ctx->pc = 0x490A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490A00u, 0x4907E8u, 0x4907F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4907F0u;
label_4907f0:
    // 0x4907f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4907f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4907f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4907f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4907f8: 0xc124214  jal         func_490850
    ctx->pc = 0x4907F8u;
    SET_GPR_U32(ctx, 31, 0x490800u);
    ctx->pc = 0x490850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490850u, 0x4907F8u, 0x490800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490800u;
label_490800:
    // 0x490800: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x490800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_490804:
    // 0x490804: 0xaf90c0fc  sw          $s0, -0x3F04($gp)
    ctx->pc = 0x490804u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951164), GPR_U32(ctx, 16));
    // 0x490808: 0x8f82c0f8  lw          $v0, -0x3F08($gp)
    ctx->pc = 0x490808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951160)));
    // 0x49080c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49080Cu;
    {
        const bool branch_taken_0x49080c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49080c) {
            ctx->pc = 0x490820u;
            goto label_490820;
        }
    }
    ctx->pc = 0x490814u;
    // 0x490814: 0x8f82c0fc  lw          $v0, -0x3F04($gp)
    ctx->pc = 0x490814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951164)));
    // 0x490818: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x490818u;
    {
        const bool branch_taken_0x490818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x490818) {
            ctx->pc = 0x49082Cu;
            goto label_49082c;
        }
    }
    ctx->pc = 0x490820u;
label_490820:
    // 0x490820: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x490820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x490824: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x490824u;
    {
        const bool branch_taken_0x490824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490824) {
            ctx->pc = 0x490838u;
            goto label_490838;
        }
    }
    ctx->pc = 0x49082Cu;
label_49082c:
    // 0x49082c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49082cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x490830: 0xaf82c0f4  sw          $v0, -0x3F0C($gp)
    ctx->pc = 0x490830u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951156), GPR_U32(ctx, 2));
    // 0x490834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x490834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_490838:
    // 0x490838: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x490838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49083c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49083cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490840: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x490840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490844: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x490844u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x490848: 0x3e00008  jr          $ra
    ctx->pc = 0x490848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x490850u;
}
