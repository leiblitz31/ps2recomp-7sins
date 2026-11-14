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

// Function: sub_002D2200
// Address: 0x2d2200 - 0x2d2290
void sub_002D2200_0x2d2200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2200_0x2d2200");
#endif

    switch (ctx->pc) {
        case 0x2d223cu: goto label_2d223c;
        case 0x2d227cu: goto label_2d227c;
        default: break;
    }

    ctx->pc = 0x2d2200u;

    // 0x2d2200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d2200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d2204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d2204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d2208: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2d2208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2d220c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2d220cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2d2210: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d2210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2214: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2d2214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d2218: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d2218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d221c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2d221cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d2220: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D2220u;
    {
        const bool branch_taken_0x2d2220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d2220) {
            ctx->pc = 0x2D2254u;
            goto label_2d2254;
        }
    }
    ctx->pc = 0x2D2228u;
    // 0x2d2228: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d2228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d222c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2d222cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d2230: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2d2230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2234: 0xc08418c  jal         func_210630
    ctx->pc = 0x2D2234u;
    SET_GPR_U32(ctx, 31, 0x2D223Cu);
    ctx->pc = 0x210630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210630u, 0x2D2234u, 0x2D223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D223Cu;
label_2d223c:
    // 0x2d223c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d223cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2240: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2d2240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d2244: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x2d2244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2d2248: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2d2248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2d224c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D224Cu;
    {
        const bool branch_taken_0x2d224c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d224c) {
            ctx->pc = 0x2D227Cu;
            goto label_2d227c;
        }
    }
    ctx->pc = 0x2D2254u;
label_2d2254:
    // 0x2d2254: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d2254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2258: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2d2258u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d225c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d225cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2260: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2d2260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d2264: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2d2264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2268: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2d2268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2d226c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d226cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2270: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2d2270u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2274: 0xc0840e4  jal         func_210390
    ctx->pc = 0x2D2274u;
    SET_GPR_U32(ctx, 31, 0x2D227Cu);
    ctx->pc = 0x210390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210390u, 0x2D2274u, 0x2D227Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D227Cu;
label_2d227c:
    // 0x2d227c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d227cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2280: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d2280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d2284: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D228Cu;
    // 0x2d228c: 0x0  nop
    ctx->pc = 0x2d228cu;
    // NOP
    ctx->pc = 0x2d2290u;
}
