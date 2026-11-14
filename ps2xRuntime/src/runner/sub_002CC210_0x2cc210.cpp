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

// Function: sub_002CC210
// Address: 0x2cc210 - 0x2cc2a0
void sub_002CC210_0x2cc210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC210_0x2cc210");
#endif

    switch (ctx->pc) {
        case 0x2cc24cu: goto label_2cc24c;
        case 0x2cc28cu: goto label_2cc28c;
        default: break;
    }

    ctx->pc = 0x2cc210u;

    // 0x2cc210: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cc210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cc214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cc214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cc218: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2cc218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2cc21c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2cc21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2cc220: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2cc220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc224: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2cc224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cc228: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2cc228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc22c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2cc22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2cc230: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CC230u;
    {
        const bool branch_taken_0x2cc230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cc230) {
            ctx->pc = 0x2CC264u;
            goto label_2cc264;
        }
    }
    ctx->pc = 0x2CC238u;
    // 0x2cc238: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2cc238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc23c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cc23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cc240: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2cc240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc244: 0xc0b313c  jal         func_2CC4F0
    ctx->pc = 0x2CC244u;
    SET_GPR_U32(ctx, 31, 0x2CC24Cu);
    ctx->pc = 0x2CC4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4F0u, 0x2CC244u, 0x2CC24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC24Cu;
label_2cc24c:
    // 0x2cc24c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2cc24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc250: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2cc250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2cc254: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2cc254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2cc258: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2cc258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2cc25c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2CC25Cu;
    {
        const bool branch_taken_0x2cc25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc25c) {
            ctx->pc = 0x2CC28Cu;
            goto label_2cc28c;
        }
    }
    ctx->pc = 0x2CC264u;
label_2cc264:
    // 0x2cc264: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2cc264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc268: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2cc268u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cc26c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2cc26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc270: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2cc270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cc274: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2cc274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc278: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2cc278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2cc27c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2cc27cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc280: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2cc280u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc284: 0xc0b30a8  jal         func_2CC2A0
    ctx->pc = 0x2CC284u;
    SET_GPR_U32(ctx, 31, 0x2CC28Cu);
    ctx->pc = 0x2CC2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC2A0u, 0x2CC284u, 0x2CC28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC28Cu;
label_2cc28c:
    // 0x2cc28c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc290: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2cc290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cc294: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC29Cu;
    // 0x2cc29c: 0x0  nop
    ctx->pc = 0x2cc29cu;
    // NOP
    ctx->pc = 0x2cc2a0u;
}
