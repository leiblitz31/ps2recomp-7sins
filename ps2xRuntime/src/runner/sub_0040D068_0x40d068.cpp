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

// Function: sub_0040D068
// Address: 0x40d068 - 0x40d100
void sub_0040D068_0x40d068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040D068_0x40d068");
#endif

    switch (ctx->pc) {
        case 0x40d098u: goto label_40d098;
        case 0x40d0b4u: goto label_40d0b4;
        case 0x40d0c4u: goto label_40d0c4;
        default: break;
    }

    ctx->pc = 0x40d068u;

    // 0x40d068: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x40d068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x40d06c: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x40d06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x40d070: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x40d070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x40d074: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x40d074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d078: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x40d078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x40d07c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x40d07cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d080: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x40d080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x40d084: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x40d084u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d088: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x40d088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x40d08c: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x40D08Cu;
    {
        const bool branch_taken_0x40d08c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D08Cu;
        // 0x40d090: 0xffbf0100  sd          $ra, 0x100($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d08c) {
            ctx->pc = 0x40D0DCu;
            goto label_40d0dc;
        }
    }
    ctx->pc = 0x40D094u;
    // 0x40d094: 0x24140100  addiu       $s4, $zero, 0x100
    ctx->pc = 0x40d094u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_40d098:
    // 0x40d098: 0x2e220101  sltiu       $v0, $s1, 0x101
    ctx->pc = 0x40d098u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
    // 0x40d09c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x40d09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d0a0: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x40d0a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    // 0x40d0a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40d0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d0a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x40d0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d0ac: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x40D0ACu;
    SET_GPR_U32(ctx, 31, 0x40D0B4u);
    ctx->pc = 0x40D0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D0ACu;
    // 0x40d0b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x40D0ACu, 0x40D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D0B4u;
label_40d0b4:
    // 0x40d0b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x40d0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d0b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x40d0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d0bc: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x40D0BCu;
    SET_GPR_U32(ctx, 31, 0x40D0C4u);
    ctx->pc = 0x40D0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D0BCu;
    // 0x40d0c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x40D0BCu, 0x40D0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D0C4u;
label_40d0c4:
    // 0x40d0c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x40D0C4u;
    {
        const bool branch_taken_0x40d0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40D0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D0C4u;
        // 0x40d0c8: 0x2308823  subu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d0c4) {
            ctx->pc = 0x40D0D4u;
            goto label_40d0d4;
        }
    }
    ctx->pc = 0x40D0CCu;
    // 0x40d0cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x40D0CCu;
    {
        const bool branch_taken_0x40d0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D0CCu;
        // 0x40d0d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d0cc) {
            ctx->pc = 0x40D0E0u;
            goto label_40d0e0;
        }
    }
    ctx->pc = 0x40D0D4u;
label_40d0d4:
    // 0x40d0d4: 0x1620fff0  bnez        $s1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x40D0D4u;
    {
        const bool branch_taken_0x40d0d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x40D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D0D4u;
        // 0x40d0d8: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d0d4) {
            ctx->pc = 0x40D098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40d098;
        }
    }
    ctx->pc = 0x40D0DCu;
label_40d0dc:
    // 0x40d0dc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x40d0dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40d0e0:
    // 0x40d0e0: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x40d0e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x40d0e4: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x40d0e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x40d0e8: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x40d0e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x40d0ec: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x40d0ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x40d0f0: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x40d0f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x40d0f4: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x40d0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x40d0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x40D0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D0F8u;
        // 0x40d0fc: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40D100u;
}
