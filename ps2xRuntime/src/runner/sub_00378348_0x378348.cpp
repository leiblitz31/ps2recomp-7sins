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

// Function: sub_00378348
// Address: 0x378348 - 0x3783d8
void sub_00378348_0x378348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378348_0x378348");
#endif

    ctx->pc = 0x378348u;

    // 0x378348: 0x8f82a8a0  lw          $v0, -0x5760($gp)
    ctx->pc = 0x378348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944928)));
    // 0x37834c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x37834cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x378350: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x378350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x378354: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x378354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x378358: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x378358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x37835c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x37835cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x378360: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x378360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x378364: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x378364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x378368: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x378368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x37836c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x37836cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x378370: 0x8f83a8a0  lw          $v1, -0x5760($gp)
    ctx->pc = 0x378370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944928)));
    // 0x378374: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x378374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x378378: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x378378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37837c: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x37837cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x378380: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x378380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x378384: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x378384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x378388: 0x46182b  sltu        $v1, $v0, $a2
    ctx->pc = 0x378388u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x37838c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x37838cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x378390: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x378390u;
    {
        const bool branch_taken_0x378390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x378394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378390u;
        // 0x378394: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378390) {
            ctx->pc = 0x3783B0u;
            goto label_3783b0;
        }
    }
    ctx->pc = 0x378398u;
    // 0x378398: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x378398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37839c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x37839cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3783a0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3783a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3783a4: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x3783a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x3783a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3783A8u;
    {
        const bool branch_taken_0x3783a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3783ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3783A8u;
        // 0x3783ac: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3783a8) {
            ctx->pc = 0x3783CCu;
            goto label_3783cc;
        }
    }
    ctx->pc = 0x3783B0u;
label_3783b0:
    // 0x3783b0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3783b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3783b4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3783b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3783b8: 0x46182b  sltu        $v1, $v0, $a2
    ctx->pc = 0x3783b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3783bc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3783BCu;
    {
        const bool branch_taken_0x3783bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3783C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3783BCu;
        // 0x3783c0: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3783bc) {
            ctx->pc = 0x3783CCu;
            goto label_3783cc;
        }
    }
    ctx->pc = 0x3783C4u;
    // 0x3783c4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3783c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3783c8: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x3783c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_3783cc:
    // 0x3783cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3783CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3783D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3783CCu;
        // 0x3783d0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3783CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3783D4u;
    // 0x3783d4: 0x0  nop
    ctx->pc = 0x3783d4u;
    // NOP
    ctx->pc = 0x3783d8u;
}
