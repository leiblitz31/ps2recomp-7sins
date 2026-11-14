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

// Function: sub_003850D0
// Address: 0x3850d0 - 0x385170
void sub_003850D0_0x3850d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003850D0_0x3850d0");
#endif

    switch (ctx->pc) {
        case 0x3850f4u: goto label_3850f4;
        case 0x385124u: goto label_385124;
        case 0x385148u: goto label_385148;
        default: break;
    }

    ctx->pc = 0x3850d0u;

    // 0x3850d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3850d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3850d4: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x3850d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x3850d8: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x3850d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x3850dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3850dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3850e0: 0x24c65c30  addiu       $a2, $a2, 0x5C30
    ctx->pc = 0x3850e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23600));
    // 0x3850e4: 0x24e75cb0  addiu       $a3, $a3, 0x5CB0
    ctx->pc = 0x3850e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23728));
    // 0x3850e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3850e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3850ec: 0xc1063f6  jal         func_418FD8
    ctx->pc = 0x3850ECu;
    SET_GPR_U32(ctx, 31, 0x3850F4u);
    ctx->pc = 0x3850F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3850ECu;
    // 0x3850f0: 0x24050135  addiu       $a1, $zero, 0x135 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 309));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x3850ECu, 0x3850F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3850F4u;
label_3850f4:
    // 0x3850f4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3850F4u;
    {
        const bool branch_taken_0x3850f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3850F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3850F4u;
        // 0x3850f8: 0x3c060038  lui         $a2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3850f4) {
            ctx->pc = 0x385104u;
            goto label_385104;
        }
    }
    ctx->pc = 0x3850FCu;
    // 0x3850fc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3850FCu;
    {
        const bool branch_taken_0x3850fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3850FCu;
        // 0x385100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3850fc) {
            ctx->pc = 0x385160u;
            goto label_385160;
        }
    }
    ctx->pc = 0x385104u;
label_385104:
    // 0x385104: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x385104u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x385108: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x385108u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x38510c: 0x24c65638  addiu       $a2, $a2, 0x5638
    ctx->pc = 0x38510cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22072));
    // 0x385110: 0x24e75670  addiu       $a3, $a3, 0x5670
    ctx->pc = 0x385110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22128));
    // 0x385114: 0x24050135  addiu       $a1, $zero, 0x135
    ctx->pc = 0x385114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 309));
    // 0x385118: 0x25085778  addiu       $t0, $t0, 0x5778
    ctx->pc = 0x385118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22392));
    // 0x38511c: 0xc0e39f6  jal         func_38E7D8
    ctx->pc = 0x38511Cu;
    SET_GPR_U32(ctx, 31, 0x385124u);
    ctx->pc = 0x385120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38511Cu;
    // 0x385120: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E7D8u, 0x38511Cu, 0x385124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385124u;
label_385124:
    // 0x385124: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x385124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x385128: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x385128u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x38512c: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x38512cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x385130: 0xaf82bd00  sw          $v0, -0x4300($gp)
    ctx->pc = 0x385130u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950144), GPR_U32(ctx, 2));
    // 0x385134: 0x24a548a8  addiu       $a1, $a1, 0x48A8
    ctx->pc = 0x385134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18600));
    // 0x385138: 0x24c65990  addiu       $a2, $a2, 0x5990
    ctx->pc = 0x385138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22928));
    // 0x38513c: 0x24e75b88  addiu       $a3, $a3, 0x5B88
    ctx->pc = 0x38513cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23432));
    // 0x385140: 0xc0e3a08  jal         func_38E820
    ctx->pc = 0x385140u;
    SET_GPR_U32(ctx, 31, 0x385148u);
    ctx->pc = 0x385144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385140u;
    // 0x385144: 0x24040135  addiu       $a0, $zero, 0x135 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 309));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E820u, 0x385140u, 0x385148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385148u;
label_385148:
    // 0x385148: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x385148u;
    {
        const bool branch_taken_0x385148 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x38514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385148u;
        // 0x38514c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385148) {
            ctx->pc = 0x38515Cu;
            goto label_38515c;
        }
    }
    ctx->pc = 0x385150u;
    // 0x385150: 0x8f82bd00  lw          $v0, -0x4300($gp)
    ctx->pc = 0x385150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950144)));
    // 0x385154: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x385154u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x385158: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x385158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_38515c:
    // 0x38515c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x38515cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_385160:
    // 0x385160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x385160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x385164: 0x3e00008  jr          $ra
    ctx->pc = 0x385164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385164u;
        // 0x385168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38516Cu;
    // 0x38516c: 0x0  nop
    ctx->pc = 0x38516cu;
    // NOP
    ctx->pc = 0x385170u;
}
