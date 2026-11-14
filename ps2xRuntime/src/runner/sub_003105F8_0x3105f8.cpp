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

// Function: sub_003105F8
// Address: 0x3105f8 - 0x310670
void sub_003105F8_0x3105f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003105F8_0x3105f8");
#endif

    switch (ctx->pc) {
        case 0x310628u: goto label_310628;
        case 0x310654u: goto label_310654;
        default: break;
    }

    ctx->pc = 0x3105f8u;

    // 0x3105f8: 0x24030334  addiu       $v1, $zero, 0x334
    ctx->pc = 0x3105f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
    // 0x3105fc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3105fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x310600: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x310600u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x310604: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x310604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x310608: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x310608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x31060c: 0x24427e40  addiu       $v0, $v0, 0x7E40
    ctx->pc = 0x31060cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32320));
    // 0x310610: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x310610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x310614: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x310614u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310618: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x310618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31061c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31061cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x310620: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x310620u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x310624: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x310624u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_310628:
    // 0x310628: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x310628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x31062c: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x31062cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x310630: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x310630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x310634: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x310634u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x310638: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x310638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x31063c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x31063cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x310640: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x310640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x310644: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x310644u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x310648: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x310648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x31064c: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x31064Cu;
    SET_GPR_U32(ctx, 31, 0x310654u);
    ctx->pc = 0x310650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31064Cu;
    // 0x310650: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x31064Cu, 0x310654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310654u;
label_310654:
    // 0x310654: 0x623fff4  bgezl       $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x310654u;
    {
        const bool branch_taken_0x310654 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x310654) {
            ctx->pc = 0x310658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310654u;
            // 0x310658: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310628;
        }
    }
    ctx->pc = 0x31065Cu;
    // 0x31065c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31065cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x310660: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x310660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x310664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310668: 0x3e00008  jr          $ra
    ctx->pc = 0x310668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310668u;
        // 0x31066c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310670u;
}
