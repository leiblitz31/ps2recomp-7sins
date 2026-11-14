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

// Function: sub_00418438
// Address: 0x418438 - 0x4184b8
void sub_00418438_0x418438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418438_0x418438");
#endif

    switch (ctx->pc) {
        case 0x418474u: goto label_418474;
        default: break;
    }

    ctx->pc = 0x418438u;

    // 0x418438: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x418438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41843c: 0xaf85bdf8  sw          $a1, -0x4208($gp)
    ctx->pc = 0x41843cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950392), GPR_U32(ctx, 5));
    // 0x418440: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x418440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x418444: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x418444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x418448: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x418448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41844c: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x41844cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x418450: 0x8c44c898  lw          $a0, -0x3768($v0)
    ctx->pc = 0x418450u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5DC898u));
    // 0x418454: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x418454u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x418458: 0x8f85ad78  lw          $a1, -0x5288($gp)
    ctx->pc = 0x418458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946168)));
    // 0x41845c: 0x2508e858  addiu       $t0, $t0, -0x17A8
    ctx->pc = 0x41845cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961240));
    // 0x418460: 0x8f87ad7c  lw          $a3, -0x5284($gp)
    ctx->pc = 0x418460u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946172)));
    // 0x418464: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x418464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x418468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x418468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41846c: 0xc10408c  jal         func_410230
    ctx->pc = 0x41846Cu;
    SET_GPR_U32(ctx, 31, 0x418474u);
    ctx->pc = 0x418470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41846Cu;
    // 0x418470: 0x35290005  ori         $t1, $t1, 0x5 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)5);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x41846Cu, 0x418474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418474u;
label_418474:
    // 0x418474: 0x8f84bdf8  lw          $a0, -0x4208($gp)
    ctx->pc = 0x418474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950392)));
    // 0x418478: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x418478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x41847c: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x41847cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x418480: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x418480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x418484: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x418484u;
    {
        const bool branch_taken_0x418484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x418488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418484u;
        // 0x418488: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418484) {
            ctx->pc = 0x4184A0u;
            goto label_4184a0;
        }
    }
    ctx->pc = 0x41848Cu;
    // 0x41848c: 0x8f83bdfc  lw          $v1, -0x4204($gp)
    ctx->pc = 0x41848cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950396)));
    // 0x418490: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x418490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x418494: 0xaf83bdfc  sw          $v1, -0x4204($gp)
    ctx->pc = 0x418494u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950396), GPR_U32(ctx, 3));
    // 0x418498: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x418498u;
    {
        const bool branch_taken_0x418498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418498u;
        // 0x41849c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418498) {
            ctx->pc = 0x4184A4u;
            goto label_4184a4;
        }
    }
    ctx->pc = 0x4184A0u;
label_4184a0:
    // 0x4184a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4184a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4184a4:
    // 0x4184a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4184a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4184a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4184a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4184ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4184ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4184B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4184ACu;
        // 0x4184b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4184ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4184B4u;
    // 0x4184b4: 0x0  nop
    ctx->pc = 0x4184b4u;
    // NOP
    ctx->pc = 0x4184b8u;
}
