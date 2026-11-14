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

// Function: sub_002690B0
// Address: 0x2690b0 - 0x269140
void sub_002690B0_0x2690b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002690B0_0x2690b0");
#endif

    switch (ctx->pc) {
        case 0x2690ecu: goto label_2690ec;
        case 0x26912cu: goto label_26912c;
        default: break;
    }

    ctx->pc = 0x2690b0u;

    // 0x2690b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2690b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2690b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2690b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2690b8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2690b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2690bc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2690bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2690c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2690c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2690c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2690c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2690c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2690c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2690cc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2690ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2690d0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2690D0u;
    {
        const bool branch_taken_0x2690d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2690d0) {
            ctx->pc = 0x269104u;
            goto label_269104;
        }
    }
    ctx->pc = 0x2690D8u;
    // 0x2690d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2690d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2690dc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2690dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2690e0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2690e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2690e4: 0xc09a450  jal         func_269140
    ctx->pc = 0x2690E4u;
    SET_GPR_U32(ctx, 31, 0x2690ECu);
    ctx->pc = 0x269140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269140u, 0x2690E4u, 0x2690ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2690ECu;
label_2690ec:
    // 0x2690ec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2690ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2690f0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2690f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2690f4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2690f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2690f8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2690f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2690fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2690FCu;
    {
        const bool branch_taken_0x2690fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2690fc) {
            ctx->pc = 0x26912Cu;
            goto label_26912c;
        }
    }
    ctx->pc = 0x269104u;
label_269104:
    // 0x269104: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x269104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269108: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x269108u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x26910c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x26910cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269110: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x269110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x269114: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x269114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269118: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x269118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x26911c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26911cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269120: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x269120u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269124: 0xc068570  jal         func_1A15C0
    ctx->pc = 0x269124u;
    SET_GPR_U32(ctx, 31, 0x26912Cu);
    ctx->pc = 0x1A15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A15C0u, 0x269124u, 0x26912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26912Cu;
label_26912c:
    // 0x26912c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26912cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269130: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x269130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x269134: 0x3e00008  jr          $ra
    ctx->pc = 0x269134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26913Cu;
    // 0x26913c: 0x0  nop
    ctx->pc = 0x26913cu;
    // NOP
    ctx->pc = 0x269140u;
}
