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

// Function: sub_001C1260
// Address: 0x1c1260 - 0x1c1300
void sub_001C1260_0x1c1260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1260_0x1c1260");
#endif

    switch (ctx->pc) {
        case 0x1c1280u: goto label_1c1280;
        case 0x1c1290u: goto label_1c1290;
        case 0x1c12a0u: goto label_1c12a0;
        case 0x1c12b4u: goto label_1c12b4;
        case 0x1c12c4u: goto label_1c12c4;
        case 0x1c12d4u: goto label_1c12d4;
        case 0x1c12e8u: goto label_1c12e8;
        default: break;
    }

    ctx->pc = 0x1c1260u;

    // 0x1c1260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c1260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c1264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c1268: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c1268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c126c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c126cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1c1270: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c1270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1274: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1c1274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1278: 0xc0704d8  jal         func_1C1360
    ctx->pc = 0x1C1278u;
    SET_GPR_U32(ctx, 31, 0x1C1280u);
    ctx->pc = 0x1C1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1360u, 0x1C1278u, 0x1C1280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1280u;
label_1c1280:
    // 0x1c1280: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C1280u;
    {
        const bool branch_taken_0x1c1280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1280) {
            ctx->pc = 0x1C12F0u;
            goto label_1c12f0;
        }
    }
    ctx->pc = 0x1C1288u;
    // 0x1c1288: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1288u;
    {
        const bool branch_taken_0x1c1288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1288) {
            ctx->pc = 0x1C12A0u;
            goto label_1c12a0;
        }
    }
    ctx->pc = 0x1C1290u;
label_1c1290:
    // 0x1c1290: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c1290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1294: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1c1294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1298: 0xc070544  jal         func_1C1510
    ctx->pc = 0x1C1298u;
    SET_GPR_U32(ctx, 31, 0x1C12A0u);
    ctx->pc = 0x1C1510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1510u, 0x1C1298u, 0x1C12A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C12A0u;
label_1c12a0:
    // 0x1c12a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c12a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c12a4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1c12a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c12a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c12a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c12ac: 0xc0704fc  jal         func_1C13F0
    ctx->pc = 0x1C12ACu;
    SET_GPR_U32(ctx, 31, 0x1C12B4u);
    ctx->pc = 0x1C13F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C13F0u, 0x1C12ACu, 0x1C12B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C12B4u;
label_1c12b4:
    // 0x1c12b4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C12B4u;
    {
        const bool branch_taken_0x1c12b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c12b4) {
            ctx->pc = 0x1C1290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1290;
        }
    }
    ctx->pc = 0x1C12BCu;
    // 0x1c12bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C12BCu;
    {
        const bool branch_taken_0x1c12bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c12bc) {
            ctx->pc = 0x1C12D4u;
            goto label_1c12d4;
        }
    }
    ctx->pc = 0x1C12C4u;
label_1c12c4:
    // 0x1c12c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c12c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c12c8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1c12c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c12cc: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1C12CCu;
    SET_GPR_U32(ctx, 31, 0x1C12D4u);
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1C12CCu, 0x1C12D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C12D4u;
label_1c12d4:
    // 0x1c12d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c12d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c12d8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1c12d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c12dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c12dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c12e0: 0xc070520  jal         func_1C1480
    ctx->pc = 0x1C12E0u;
    SET_GPR_U32(ctx, 31, 0x1C12E8u);
    ctx->pc = 0x1C1480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1480u, 0x1C12E0u, 0x1C12E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C12E8u;
label_1c12e8:
    // 0x1c12e8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C12E8u;
    {
        const bool branch_taken_0x1c12e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c12e8) {
            ctx->pc = 0x1C12C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c12c4;
        }
    }
    ctx->pc = 0x1C12F0u;
label_1c12f0:
    // 0x1c12f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c12f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c12f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c12f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c12f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C12F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C12F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1300u;
}
