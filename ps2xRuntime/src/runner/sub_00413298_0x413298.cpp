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

// Function: sub_00413298
// Address: 0x413298 - 0x4132f8
void sub_00413298_0x413298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413298_0x413298");
#endif

    switch (ctx->pc) {
        case 0x413298u: goto label_413298;
        case 0x41329cu: goto label_41329c;
        case 0x4132a0u: goto label_4132a0;
        case 0x4132a4u: goto label_4132a4;
        case 0x4132a8u: goto label_4132a8;
        case 0x4132acu: goto label_4132ac;
        case 0x4132b0u: goto label_4132b0;
        case 0x4132b4u: goto label_4132b4;
        case 0x4132b8u: goto label_4132b8;
        case 0x4132bcu: goto label_4132bc;
        case 0x4132c0u: goto label_4132c0;
        case 0x4132c4u: goto label_4132c4;
        case 0x4132c8u: goto label_4132c8;
        case 0x4132ccu: goto label_4132cc;
        case 0x4132d0u: goto label_4132d0;
        case 0x4132d4u: goto label_4132d4;
        case 0x4132d8u: goto label_4132d8;
        case 0x4132dcu: goto label_4132dc;
        case 0x4132e0u: goto label_4132e0;
        case 0x4132e4u: goto label_4132e4;
        case 0x4132e8u: goto label_4132e8;
        case 0x4132ecu: goto label_4132ec;
        case 0x4132f0u: goto label_4132f0;
        case 0x4132f4u: goto label_4132f4;
        default: break;
    }

    ctx->pc = 0x413298u;

label_413298:
    // 0x413298: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x413298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_41329c:
    // 0x41329c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41329cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4132a0:
    // 0x4132a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4132a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4132a4:
    // 0x4132a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4132a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4132a8:
    // 0x4132a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4132a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4132ac:
    // 0x4132ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4132acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4132b0:
    // 0x4132b0: 0x8e500014  lw          $s0, 0x14($s2)
    ctx->pc = 0x4132b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_4132b4:
    // 0x4132b4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4132b8:
    if (ctx->pc == 0x4132B8u) {
        ctx->pc = 0x4132B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4132B4u;
        // 0x4132b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4132BCu;
        goto label_4132bc;
    }
    ctx->pc = 0x4132B4u;
    {
        const bool branch_taken_0x4132b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4132B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4132B4u;
        // 0x4132b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4132b4) {
            ctx->pc = 0x4132DCu;
            goto label_4132dc;
        }
    }
    ctx->pc = 0x4132BCu;
label_4132bc:
    // 0x4132bc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x4132bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_4132c0:
    // 0x4132c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4132c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4132c4:
    // 0x4132c4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4132c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4132c8:
    // 0x4132c8: 0x40f809  jalr        $v0
label_4132cc:
    if (ctx->pc == 0x4132CCu) {
        ctx->pc = 0x4132CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4132C8u;
        // 0x4132cc: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4132D0u;
        goto label_4132d0;
    }
    ctx->pc = 0x4132C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4132D0u);
        ctx->pc = 0x4132CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4132C8u;
        // 0x4132cc: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4132C8u, 0x4132D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4132D0u;
label_4132d0:
    // 0x4132d0: 0x8e100034  lw          $s0, 0x34($s0)
    ctx->pc = 0x4132d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_4132d4:
    // 0x4132d4: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
label_4132d8:
    if (ctx->pc == 0x4132D8u) {
        ctx->pc = 0x4132D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4132D4u;
        // 0x4132d8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4132DCu;
        goto label_4132dc;
    }
    ctx->pc = 0x4132D4u;
    {
        const bool branch_taken_0x4132d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4132d4) {
            ctx->pc = 0x4132D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4132D4u;
            // 0x4132d8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4132C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4132c0;
        }
    }
    ctx->pc = 0x4132DCu;
label_4132dc:
    // 0x4132dc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4132dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4132e0:
    // 0x4132e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4132e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4132e4:
    // 0x4132e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4132e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4132e8:
    // 0x4132e8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4132e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4132ec:
    // 0x4132ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4132ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4132f0:
    // 0x4132f0: 0x3e00008  jr          $ra
label_4132f4:
    if (ctx->pc == 0x4132F4u) {
        ctx->pc = 0x4132F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4132F0u;
        // 0x4132f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4132F8u;
        goto label_fallthrough_0x4132f0;
    }
    ctx->pc = 0x4132F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4132F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4132F0u;
        // 0x4132f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4132F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4132f0:
    ctx->pc = 0x4132F8u;
}
