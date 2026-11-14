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

// Function: sub_004561E0
// Address: 0x4561e0 - 0x456250
void sub_004561E0_0x4561e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004561E0_0x4561e0");
#endif

    switch (ctx->pc) {
        case 0x456204u: goto label_456204;
        case 0x456238u: goto label_456238;
        default: break;
    }

    ctx->pc = 0x4561e0u;

    // 0x4561e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4561e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4561e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4561e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4561e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4561e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4561ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x4561ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4561f0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x4561f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x4561f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4561f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4561f8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x4561f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4561fc: 0xc061f44  jal         func_187D10
    ctx->pc = 0x4561FCu;
    SET_GPR_U32(ctx, 31, 0x456204u);
    ctx->pc = 0x187D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187D10u, 0x4561FCu, 0x456204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456204u;
label_456204:
    // 0x456204: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x456204u;
    {
        const bool branch_taken_0x456204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x456204) {
            ctx->pc = 0x456218u;
            goto label_456218;
        }
    }
    ctx->pc = 0x45620Cu;
    // 0x45620c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45620cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456210: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x456210u;
    {
        const bool branch_taken_0x456210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x456210) {
            ctx->pc = 0x45623Cu;
            goto label_45623c;
        }
    }
    ctx->pc = 0x456218u;
label_456218:
    // 0x456218: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x456218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45621c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45621cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x456220: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x456220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x456224: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x456224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x456228: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x456228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45622c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x45622cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x456230: 0xc115894  jal         func_456250
    ctx->pc = 0x456230u;
    SET_GPR_U32(ctx, 31, 0x456238u);
    ctx->pc = 0x456250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456250u, 0x456230u, 0x456238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456238u;
label_456238:
    // 0x456238: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x456238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45623c:
    // 0x45623c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45623cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x456240: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x456240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x456244: 0x3e00008  jr          $ra
    ctx->pc = 0x456244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x456244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45624Cu;
    // 0x45624c: 0x0  nop
    ctx->pc = 0x45624cu;
    // NOP
    ctx->pc = 0x456250u;
}
