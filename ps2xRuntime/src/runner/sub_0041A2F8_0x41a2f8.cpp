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

// Function: sub_0041A2F8
// Address: 0x41a2f8 - 0x41a380
void sub_0041A2F8_0x41a2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041A2F8_0x41a2f8");
#endif

    switch (ctx->pc) {
        case 0x41a334u: goto label_41a334;
        default: break;
    }

    ctx->pc = 0x41a2f8u;

    // 0x41a2f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41a2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41a2fc: 0xaf85be00  sw          $a1, -0x4200($gp)
    ctx->pc = 0x41a2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950400), GPR_U32(ctx, 5));
    // 0x41a300: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41a300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x41a304: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x41a304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x41a308: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41a308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a30c: 0x8f85ad84  lw          $a1, -0x527C($gp)
    ctx->pc = 0x41a30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946180)));
    // 0x41a310: 0x8c44c9c8  lw          $a0, -0x3638($v0)
    ctx->pc = 0x41a310u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5DC9C8u));
    // 0x41a314: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x41a314u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x41a318: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x41a318u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x41a31c: 0x8f87ad88  lw          $a3, -0x5278($gp)
    ctx->pc = 0x41a31cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946184)));
    // 0x41a320: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41a320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41a324: 0x25082880  addiu       $t0, $t0, 0x2880
    ctx->pc = 0x41a324u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10368));
    // 0x41a328: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x41a328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x41a32c: 0xc10408c  jal         func_410230
    ctx->pc = 0x41A32Cu;
    SET_GPR_U32(ctx, 31, 0x41A334u);
    ctx->pc = 0x41A330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A32Cu;
    // 0x41a330: 0x3529000e  ori         $t1, $t1, 0xE (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)14);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x41A32Cu, 0x41A334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A334u;
label_41a334:
    // 0x41a334: 0x8f84be00  lw          $a0, -0x4200($gp)
    ctx->pc = 0x41a334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950400)));
    // 0x41a338: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41a338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x41a33c: 0x2465e880  addiu       $a1, $v1, -0x1780
    ctx->pc = 0x41a33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x41a340: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x41a340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x41a344: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x41A344u;
    {
        const bool branch_taken_0x41a344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A344u;
        // 0x41a348: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a344) {
            ctx->pc = 0x41A36Cu;
            goto label_41a36c;
        }
    }
    ctx->pc = 0x41A34Cu;
    // 0x41a34c: 0x8f84be04  lw          $a0, -0x41FC($gp)
    ctx->pc = 0x41a34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950404)));
    // 0x41a350: 0x24a300bc  addiu       $v1, $a1, 0xBC
    ctx->pc = 0x41a350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 188));
    // 0x41a354: 0xaca300bc  sw          $v1, 0xBC($a1)
    ctx->pc = 0x41a354u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 188), GPR_U32(ctx, 3));
    // 0x41a358: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x41a358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x41a35c: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x41a35cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x41a360: 0xaf84be04  sw          $a0, -0x41FC($gp)
    ctx->pc = 0x41a360u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950404), GPR_U32(ctx, 4));
    // 0x41a364: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x41A364u;
    {
        const bool branch_taken_0x41a364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A364u;
        // 0x41a368: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a364) {
            ctx->pc = 0x41A370u;
            goto label_41a370;
        }
    }
    ctx->pc = 0x41A36Cu;
label_41a36c:
    // 0x41a36c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x41a36cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41a370:
    // 0x41a370: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41a370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41a374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41a374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41a378: 0x3e00008  jr          $ra
    ctx->pc = 0x41A378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A378u;
        // 0x41a37c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41A380u;
}
