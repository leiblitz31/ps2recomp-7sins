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

// Function: sub_001334E0
// Address: 0x1334e0 - 0x1335b0
void sub_001334E0_0x1334e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001334E0_0x1334e0");
#endif

    switch (ctx->pc) {
        case 0x133530u: goto label_133530;
        case 0x13353cu: goto label_13353c;
        case 0x133580u: goto label_133580;
        case 0x133594u: goto label_133594;
        default: break;
    }

    ctx->pc = 0x1334e0u;

    // 0x1334e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1334e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1334e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1334e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1334e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1334e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1334ec: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1334ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1334f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1334f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1334f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1334F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1334F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1334FCu;
    // 0x1334fc: 0x0  nop
    ctx->pc = 0x1334fcu;
    // NOP
    // 0x133500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x133504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x133504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133508: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x133508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13350c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x13350cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x133510: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x133510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x133514: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x133514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x133518: 0x24a52600  addiu       $a1, $a1, 0x2600
    ctx->pc = 0x133518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9728));
    // 0x13351c: 0x3c060013  lui         $a2, 0x13
    ctx->pc = 0x13351cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19 << 16));
    // 0x133520: 0x24c641b0  addiu       $a2, $a2, 0x41B0
    ctx->pc = 0x133520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16816));
    // 0x133524: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x133524u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133528: 0xc08ebf8  jal         func_23AFE0
    ctx->pc = 0x133528u;
    SET_GPR_U32(ctx, 31, 0x133530u);
    ctx->pc = 0x23AFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AFE0u, 0x133528u, 0x133530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133530u;
label_133530:
    // 0x133530: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x133530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133534: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x133534u;
    SET_GPR_U32(ctx, 31, 0x13353Cu);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x133534u, 0x13353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13353Cu;
label_13353c:
    // 0x13353c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13353cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133540: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x133540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x133544: 0x3e00008  jr          $ra
    ctx->pc = 0x133544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13354Cu;
    // 0x13354c: 0x0  nop
    ctx->pc = 0x13354cu;
    // NOP
    // 0x133550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x133554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x133554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133558: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x133558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13355c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13355cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133560: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x133560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x133564: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x133564u;
    {
        const bool branch_taken_0x133564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133564) {
            ctx->pc = 0x133588u;
            goto label_133588;
        }
    }
    ctx->pc = 0x13356Cu;
    // 0x13356c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13356cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133570: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x133570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x133574: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x133574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x133578: 0xc04cd6c  jal         func_1335B0
    ctx->pc = 0x133578u;
    SET_GPR_U32(ctx, 31, 0x133580u);
    ctx->pc = 0x1335B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1335B0u, 0x133578u, 0x133580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133580u;
label_133580:
    // 0x133580: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x133580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133584: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x133584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_133588:
    // 0x133588: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x133588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13358c: 0xc08ec48  jal         func_23B120
    ctx->pc = 0x13358Cu;
    SET_GPR_U32(ctx, 31, 0x133594u);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x13358Cu, 0x133594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133594u;
label_133594:
    // 0x133594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x133594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133598: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x133598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13359c: 0x3e00008  jr          $ra
    ctx->pc = 0x13359Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13359Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1335A4u;
    // 0x1335a4: 0x0  nop
    ctx->pc = 0x1335a4u;
    // NOP
    // 0x1335a8: 0x0  nop
    ctx->pc = 0x1335a8u;
    // NOP
    // 0x1335ac: 0x0  nop
    ctx->pc = 0x1335acu;
    // NOP
    ctx->pc = 0x1335b0u;
}
