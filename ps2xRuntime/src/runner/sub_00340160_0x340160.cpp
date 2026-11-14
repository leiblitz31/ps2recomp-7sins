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

// Function: sub_00340160
// Address: 0x340160 - 0x3401f8
void sub_00340160_0x340160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340160_0x340160");
#endif

    switch (ctx->pc) {
        case 0x340194u: goto label_340194;
        case 0x3401acu: goto label_3401ac;
        case 0x3401bcu: goto label_3401bc;
        case 0x3401dcu: goto label_3401dc;
        default: break;
    }

    ctx->pc = 0x340160u;

    // 0x340160: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x340160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x340164: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x340164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x340168: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x340168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34016c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x34016cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340170: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x340170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x340174: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x340174u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x340178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34017c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x34017cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x340180: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x340180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x340184: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x340184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x340188: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x340188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x34018c: 0xc0d120c  jal         func_344830
    ctx->pc = 0x34018Cu;
    SET_GPR_U32(ctx, 31, 0x340194u);
    ctx->pc = 0x340190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34018Cu;
    // 0x340190: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x34018Cu, 0x340194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340194u;
label_340194:
    // 0x340194: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x340194u;
    {
        const bool branch_taken_0x340194 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x340198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340194u;
        // 0x340198: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340194) {
            ctx->pc = 0x3401DCu;
            goto label_3401dc;
        }
    }
    ctx->pc = 0x34019Cu;
    // 0x34019c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34019cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3401a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3401a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3401a4: 0xc10341a  jal         func_40D068
    ctx->pc = 0x3401A4u;
    SET_GPR_U32(ctx, 31, 0x3401ACu);
    ctx->pc = 0x3401A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3401A4u;
    // 0x3401a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x3401A4u, 0x3401ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3401ACu;
label_3401ac:
    // 0x3401ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3401acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3401b0: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x3401b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3401b4: 0xc10341a  jal         func_40D068
    ctx->pc = 0x3401B4u;
    SET_GPR_U32(ctx, 31, 0x3401BCu);
    ctx->pc = 0x3401B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3401B4u;
    // 0x3401b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x3401B4u, 0x3401BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3401BCu;
label_3401bc:
    // 0x3401bc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3401bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3401c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3401c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3401c4: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3401C4u;
    {
        const bool branch_taken_0x3401c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3401c4) {
            ctx->pc = 0x3401C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3401C4u;
            // 0x3401c8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3401CCu;
            goto label_3401cc;
        }
    }
    ctx->pc = 0x3401CCu;
label_3401cc:
    // 0x3401cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3401ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3401d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3401d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3401d4: 0xc103440  jal         func_40D100
    ctx->pc = 0x3401D4u;
    SET_GPR_U32(ctx, 31, 0x3401DCu);
    ctx->pc = 0x3401D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3401D4u;
    // 0x3401d8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3401D4u, 0x3401DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3401DCu;
label_3401dc:
    // 0x3401dc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3401dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3401e0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3401e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3401e4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3401e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3401e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3401e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3401ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3401ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3401f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3401F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3401F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3401F0u;
        // 0x3401f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3401F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3401F8u;
}
