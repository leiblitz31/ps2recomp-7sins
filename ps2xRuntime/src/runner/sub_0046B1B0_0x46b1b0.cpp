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

// Function: sub_0046B1B0
// Address: 0x46b1b0 - 0x46b270
void sub_0046B1B0_0x46b1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046B1B0_0x46b1b0");
#endif

    switch (ctx->pc) {
        case 0x46b1d4u: goto label_46b1d4;
        case 0x46b1e8u: goto label_46b1e8;
        case 0x46b1f4u: goto label_46b1f4;
        case 0x46b208u: goto label_46b208;
        case 0x46b228u: goto label_46b228;
        case 0x46b240u: goto label_46b240;
        default: break;
    }

    ctx->pc = 0x46b1b0u;

    // 0x46b1b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x46b1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x46b1b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x46b1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x46b1b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46b1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x46b1bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46b1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46b1c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46b1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46b1c4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x46b1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x46b1c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x46b1c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b1cc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x46B1CCu;
    {
        const bool branch_taken_0x46b1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b1cc) {
            ctx->pc = 0x46B230u;
            goto label_46b230;
        }
    }
    ctx->pc = 0x46B1D4u;
label_46b1d4:
    // 0x46b1d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x46b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46b1d8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46b1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46b1dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46b1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b1e0: 0xc11a5cc  jal         func_469730
    ctx->pc = 0x46B1E0u;
    SET_GPR_U32(ctx, 31, 0x46B1E8u);
    ctx->pc = 0x469730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469730u, 0x46B1E0u, 0x46B1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B1E8u;
label_46b1e8:
    // 0x46b1e8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x46b1e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46b1ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x46B1ECu;
    {
        const bool branch_taken_0x46b1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b1ec) {
            ctx->pc = 0x46B20Cu;
            goto label_46b20c;
        }
    }
    ctx->pc = 0x46B1F4u;
label_46b1f4:
    // 0x46b1f4: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x46b1f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x46b1f8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x46b1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46b1fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46b1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b200: 0xc11ac9c  jal         func_46B270
    ctx->pc = 0x46B200u;
    SET_GPR_U32(ctx, 31, 0x46B208u);
    ctx->pc = 0x46B270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B270u, 0x46B200u, 0x46B208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B208u;
label_46b208:
    // 0x46b208: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x46b208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46b20c:
    // 0x46b20c: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x46B20Cu;
    {
        const bool branch_taken_0x46b20c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x46b20c) {
            ctx->pc = 0x46B1F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46b1f4;
        }
    }
    ctx->pc = 0x46B214u;
    // 0x46b214: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x46b214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46b218: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46b218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46b21c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46b21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b220: 0xc11a5cc  jal         func_469730
    ctx->pc = 0x46B220u;
    SET_GPR_U32(ctx, 31, 0x46B228u);
    ctx->pc = 0x469730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469730u, 0x46B220u, 0x46B228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B228u;
label_46b228:
    // 0x46b228: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x46b228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x46b22c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x46b22cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_46b230:
    // 0x46b230: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x46b230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46b234: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46b234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46b238: 0xc11a5bc  jal         func_4696F0
    ctx->pc = 0x46B238u;
    SET_GPR_U32(ctx, 31, 0x46B240u);
    ctx->pc = 0x4696F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4696F0u, 0x46B238u, 0x46B240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B240u;
label_46b240:
    // 0x46b240: 0x222182b  sltu        $v1, $s1, $v0
    ctx->pc = 0x46b240u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x46b244: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x46B244u;
    {
        const bool branch_taken_0x46b244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x46b244) {
            ctx->pc = 0x46B1D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46b1d4;
        }
    }
    ctx->pc = 0x46B24Cu;
    // 0x46b24c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x46b24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46b250: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x46b250u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x46b254: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x46b254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46b258: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46b258u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46b25c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46b25cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46b260: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46b260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46b264: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x46b264u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x46b268: 0x3e00008  jr          $ra
    ctx->pc = 0x46B268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46B270u;
}
