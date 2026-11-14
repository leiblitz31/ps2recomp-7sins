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

// Function: sub_00340900
// Address: 0x340900 - 0x340998
void sub_00340900_0x340900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340900_0x340900");
#endif

    switch (ctx->pc) {
        case 0x34092cu: goto label_34092c;
        default: break;
    }

    ctx->pc = 0x340900u;

    // 0x340900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x340900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x340904: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x340904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x340908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x340908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34090c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34090cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x340910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x340914: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x340914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x340918: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x340918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34091c: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x34091cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x340920: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x340920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x340924: 0xc0d120c  jal         func_344830
    ctx->pc = 0x340924u;
    SET_GPR_U32(ctx, 31, 0x34092Cu);
    ctx->pc = 0x340928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340924u;
    // 0x340928: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x340924u, 0x34092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34092Cu;
label_34092c:
    // 0x34092c: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x34092Cu;
    {
        const bool branch_taken_0x34092c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x340930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34092Cu;
        // 0x340930: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34092c) {
            ctx->pc = 0x34097Cu;
            goto label_34097c;
        }
    }
    ctx->pc = 0x340934u;
    // 0x340934: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x340934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x340938: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x340938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x34093c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34093Cu;
    {
        const bool branch_taken_0x34093c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x340940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34093Cu;
        // 0x340940: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34093c) {
            ctx->pc = 0x340954u;
            goto label_340954;
        }
    }
    ctx->pc = 0x340944u;
    // 0x340944: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x340944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x340948: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x340948u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34094c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x34094Cu;
    {
        const bool branch_taken_0x34094c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34094Cu;
        // 0x340950: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34094c) {
            ctx->pc = 0x340958u;
            goto label_340958;
        }
    }
    ctx->pc = 0x340954u;
label_340954:
    // 0x340954: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x340954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_340958:
    // 0x340958: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x340958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x34095c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34095Cu;
    {
        const bool branch_taken_0x34095c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x340960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34095Cu;
        // 0x340960: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34095c) {
            ctx->pc = 0x340978u;
            goto label_340978;
        }
    }
    ctx->pc = 0x340964u;
    // 0x340964: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x340964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x340968: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x340968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x34096c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x34096cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x340970: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x340970u;
    {
        const bool branch_taken_0x340970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340970u;
        // 0x340974: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340970) {
            ctx->pc = 0x34097Cu;
            goto label_34097c;
        }
    }
    ctx->pc = 0x340978u;
label_340978:
    // 0x340978: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x340978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_34097c:
    // 0x34097c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x34097cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x340980: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x340980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340984: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x340984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340988: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x340988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34098c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34098cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340990: 0x3e00008  jr          $ra
    ctx->pc = 0x340990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340990u;
        // 0x340994: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340998u;
}
