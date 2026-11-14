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

// Function: sub_0025B480
// Address: 0x25b480 - 0x25b540
void sub_0025B480_0x25b480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B480_0x25b480");
#endif

    switch (ctx->pc) {
        case 0x25b4a0u: goto label_25b4a0;
        case 0x25b4c0u: goto label_25b4c0;
        case 0x25b4ccu: goto label_25b4cc;
        case 0x25b4e0u: goto label_25b4e0;
        case 0x25b4ecu: goto label_25b4ec;
        case 0x25b500u: goto label_25b500;
        case 0x25b514u: goto label_25b514;
        case 0x25b528u: goto label_25b528;
        default: break;
    }

    ctx->pc = 0x25b480u;

    // 0x25b480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25b480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25b484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b488: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25b488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25b48c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b490: 0x244401f4  addiu       $a0, $v0, 0x1F4
    ctx->pc = 0x25b490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x25b494: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25b494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b498: 0xc0966fc  jal         func_259BF0
    ctx->pc = 0x25B498u;
    SET_GPR_U32(ctx, 31, 0x25B4A0u);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x25B498u, 0x25B4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B4A0u;
label_25b4a0:
    // 0x25b4a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25b4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25b4a4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x25B4A4u;
    {
        const bool branch_taken_0x25b4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b4a4) {
            ctx->pc = 0x25B504u;
            goto label_25b504;
        }
    }
    ctx->pc = 0x25B4ACu;
    // 0x25b4ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b4b0: 0x244401f4  addiu       $a0, $v0, 0x1F4
    ctx->pc = 0x25b4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x25b4b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25b4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b4b8: 0xc0966fc  jal         func_259BF0
    ctx->pc = 0x25B4B8u;
    SET_GPR_U32(ctx, 31, 0x25B4C0u);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x25B4B8u, 0x25B4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B4C0u;
label_25b4c0:
    // 0x25b4c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25b4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25b4c4: 0xc0966f4  jal         func_259BD0
    ctx->pc = 0x25B4C4u;
    SET_GPR_U32(ctx, 31, 0x25B4CCu);
    ctx->pc = 0x259BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BD0u, 0x25B4C4u, 0x25B4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B4CCu;
label_25b4cc:
    // 0x25b4cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b4d0: 0x244401f4  addiu       $a0, $v0, 0x1F4
    ctx->pc = 0x25b4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x25b4d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25b4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b4d8: 0xc0966fc  jal         func_259BF0
    ctx->pc = 0x25B4D8u;
    SET_GPR_U32(ctx, 31, 0x25B4E0u);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x25B4D8u, 0x25B4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B4E0u;
label_25b4e0:
    // 0x25b4e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25b4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25b4e4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x25B4E4u;
    SET_GPR_U32(ctx, 31, 0x25B4ECu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x25B4E4u, 0x25B4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B4ECu;
label_25b4ec:
    // 0x25b4ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b4f0: 0x244401f4  addiu       $a0, $v0, 0x1F4
    ctx->pc = 0x25b4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x25b4f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25b4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b4f8: 0xc0966fc  jal         func_259BF0
    ctx->pc = 0x25B4F8u;
    SET_GPR_U32(ctx, 31, 0x25B500u);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x25B4F8u, 0x25B500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B500u;
label_25b500:
    // 0x25b500: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x25b500u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_25b504:
    // 0x25b504: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25b504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b508: 0x244401f4  addiu       $a0, $v0, 0x1F4
    ctx->pc = 0x25b508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x25b50c: 0xc0963d0  jal         func_258F40
    ctx->pc = 0x25B50Cu;
    SET_GPR_U32(ctx, 31, 0x25B514u);
    ctx->pc = 0x258F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258F40u, 0x25B50Cu, 0x25B514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B514u;
label_25b514:
    // 0x25b514: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25b514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b518: 0x246401f4  addiu       $a0, $v1, 0x1F4
    ctx->pc = 0x25b518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 500));
    // 0x25b51c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25b51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b520: 0xc096d50  jal         func_25B540
    ctx->pc = 0x25B520u;
    SET_GPR_U32(ctx, 31, 0x25B528u);
    ctx->pc = 0x25B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B540u, 0x25B520u, 0x25B528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B528u;
label_25b528:
    // 0x25b528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b52c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25b52cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25b530: 0x3e00008  jr          $ra
    ctx->pc = 0x25B530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B538u;
    // 0x25b538: 0x0  nop
    ctx->pc = 0x25b538u;
    // NOP
    // 0x25b53c: 0x0  nop
    ctx->pc = 0x25b53cu;
    // NOP
    ctx->pc = 0x25b540u;
}
