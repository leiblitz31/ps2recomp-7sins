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

// Function: sub_00420960
// Address: 0x420960 - 0x4209b0
void sub_00420960_0x420960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420960_0x420960");
#endif

    switch (ctx->pc) {
        case 0x420960u: goto label_420960;
        case 0x420964u: goto label_420964;
        case 0x420968u: goto label_420968;
        case 0x42096cu: goto label_42096c;
        case 0x420970u: goto label_420970;
        case 0x420974u: goto label_420974;
        case 0x420978u: goto label_420978;
        case 0x42097cu: goto label_42097c;
        case 0x420980u: goto label_420980;
        case 0x420984u: goto label_420984;
        case 0x420988u: goto label_420988;
        case 0x42098cu: goto label_42098c;
        case 0x420990u: goto label_420990;
        case 0x420994u: goto label_420994;
        case 0x420998u: goto label_420998;
        case 0x42099cu: goto label_42099c;
        case 0x4209a0u: goto label_4209a0;
        case 0x4209a4u: goto label_4209a4;
        case 0x4209a8u: goto label_4209a8;
        case 0x4209acu: goto label_4209ac;
        default: break;
    }

    ctx->pc = 0x420960u;

label_420960:
    // 0x420960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x420960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_420964:
    // 0x420964: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x420964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_420968:
    // 0x420968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x420968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_42096c:
    // 0x42096c: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_420970:
    if (ctx->pc == 0x420970u) {
        ctx->pc = 0x420970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42096Cu;
        // 0x420970: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420974u;
        goto label_420974;
    }
    ctx->pc = 0x42096Cu;
    {
        const bool branch_taken_0x42096c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x420970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42096Cu;
        // 0x420970: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42096c) {
            ctx->pc = 0x420980u;
            goto label_420980;
        }
    }
    ctx->pc = 0x420974u;
label_420974:
    // 0x420974: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x420974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_420978:
    // 0x420978: 0x10000008  b           . + 4 + (0x8 << 2)
label_42097c:
    if (ctx->pc == 0x42097Cu) {
        ctx->pc = 0x42097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420978u;
        // 0x42097c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420980u;
        goto label_420980;
    }
    ctx->pc = 0x420978u;
    {
        const bool branch_taken_0x420978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420978u;
        // 0x42097c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420978) {
            ctx->pc = 0x42099Cu;
            goto label_42099c;
        }
    }
    ctx->pc = 0x420980u;
label_420980:
    // 0x420980: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x420980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_420984:
    // 0x420984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x420984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_420988:
    // 0x420988: 0x8c62e8e8  lw          $v0, -0x1718($v1)
    ctx->pc = 0x420988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961384)));
label_42098c:
    // 0x42098c: 0x40f809  jalr        $v0
label_420990:
    if (ctx->pc == 0x420990u) {
        ctx->pc = 0x420990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42098Cu;
        // 0x420990: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420994u;
        goto label_420994;
    }
    ctx->pc = 0x42098Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x420994u);
        ctx->pc = 0x420990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42098Cu;
        // 0x420990: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42098Cu, 0x420994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x420994u;
label_420994:
    // 0x420994: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x420994u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_420998:
    // 0x420998: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x420998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42099c:
    // 0x42099c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x42099cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4209a0:
    // 0x4209a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4209a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4209a4:
    // 0x4209a4: 0x3e00008  jr          $ra
label_4209a8:
    if (ctx->pc == 0x4209A8u) {
        ctx->pc = 0x4209A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4209A4u;
        // 0x4209a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4209ACu;
        goto label_4209ac;
    }
    ctx->pc = 0x4209A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4209A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4209A4u;
        // 0x4209a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4209A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4209ACu;
label_4209ac:
    // 0x4209ac: 0x0  nop
    ctx->pc = 0x4209acu;
    // NOP
    ctx->pc = 0x4209b0u;
}
