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

// Function: sub_003852E0
// Address: 0x3852e0 - 0x385400
void sub_003852E0_0x3852e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003852E0_0x3852e0");
#endif

    switch (ctx->pc) {
        case 0x385358u: goto label_385358;
        case 0x38536cu: goto label_38536c;
        case 0x385380u: goto label_385380;
        case 0x385394u: goto label_385394;
        case 0x3853a8u: goto label_3853a8;
        case 0x3853bcu: goto label_3853bc;
        case 0x3853d0u: goto label_3853d0;
        case 0x3853e4u: goto label_3853e4;
        default: break;
    }

    ctx->pc = 0x3852e0u;

    // 0x3852e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3852E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3852E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3852E0u;
        // 0x3852e4: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3852E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3852E8u;
    // 0x3852e8: 0x8f82bd00  lw          $v0, -0x4300($gp)
    ctx->pc = 0x3852e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950144)));
    // 0x3852ec: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3852ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3852f0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3852f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3852f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3852f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3852f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3852F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3852FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3852F8u;
        // 0x3852fc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3852F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385300u;
    // 0x385300: 0x8f83bd00  lw          $v1, -0x4300($gp)
    ctx->pc = 0x385300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950144)));
    // 0x385304: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x385304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385308: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x385308u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x38530c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x38530cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x385310: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x385310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x385314: 0x3e00008  jr          $ra
    ctx->pc = 0x385314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385314u;
        // 0x385318: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38531Cu;
    // 0x38531c: 0x0  nop
    ctx->pc = 0x38531cu;
    // NOP
    // 0x385320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x385320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x385324: 0x8f82bd00  lw          $v0, -0x4300($gp)
    ctx->pc = 0x385324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950144)));
    // 0x385328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x385328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38532c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38532cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385330: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x385330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x385334: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x385334u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x385338: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x385338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x38533c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38533cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x385340: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x385340u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x385344: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x385344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x385348: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x385348u;
    {
        const bool branch_taken_0x385348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385348u;
        // 0x38534c: 0x24500008  addiu       $s0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385348) {
            ctx->pc = 0x385358u;
            goto label_385358;
        }
    }
    ctx->pc = 0x385350u;
    // 0x385350: 0xc0ef412  jal         func_3BD048
    ctx->pc = 0x385350u;
    SET_GPR_U32(ctx, 31, 0x385358u);
    ctx->pc = 0x3BD048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD048u, 0x385350u, 0x385358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385358u;
label_385358:
    // 0x385358: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x385358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x38535c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x38535Cu;
    {
        const bool branch_taken_0x38535c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38535c) {
            ctx->pc = 0x385360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38535Cu;
            // 0x385360: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385370u;
            goto label_385370;
        }
    }
    ctx->pc = 0x385364u;
    // 0x385364: 0xc0ef412  jal         func_3BD048
    ctx->pc = 0x385364u;
    SET_GPR_U32(ctx, 31, 0x38536Cu);
    ctx->pc = 0x385368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385364u;
    // 0x385368: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD048u, 0x385364u, 0x38536Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38536Cu;
label_38536c:
    // 0x38536c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x38536cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_385370:
    // 0x385370: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x385370u;
    {
        const bool branch_taken_0x385370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x385370) {
            ctx->pc = 0x385374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385370u;
            // 0x385374: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385384u;
            goto label_385384;
        }
    }
    ctx->pc = 0x385378u;
    // 0x385378: 0xc0ef412  jal         func_3BD048
    ctx->pc = 0x385378u;
    SET_GPR_U32(ctx, 31, 0x385380u);
    ctx->pc = 0x38537Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385378u;
    // 0x38537c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD048u, 0x385378u, 0x385380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385380u;
label_385380:
    // 0x385380: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x385380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_385384:
    // 0x385384: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x385384u;
    {
        const bool branch_taken_0x385384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x385384) {
            ctx->pc = 0x385388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385384u;
            // 0x385388: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385398u;
            goto label_385398;
        }
    }
    ctx->pc = 0x38538Cu;
    // 0x38538c: 0xc0ef412  jal         func_3BD048
    ctx->pc = 0x38538Cu;
    SET_GPR_U32(ctx, 31, 0x385394u);
    ctx->pc = 0x385390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38538Cu;
    // 0x385390: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD048u, 0x38538Cu, 0x385394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385394u;
label_385394:
    // 0x385394: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x385394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_385398:
    // 0x385398: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x385398u;
    {
        const bool branch_taken_0x385398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x385398) {
            ctx->pc = 0x38539Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385398u;
            // 0x38539c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3853ACu;
            goto label_3853ac;
        }
    }
    ctx->pc = 0x3853A0u;
    // 0x3853a0: 0xc0ef412  jal         func_3BD048
    ctx->pc = 0x3853A0u;
    SET_GPR_U32(ctx, 31, 0x3853A8u);
    ctx->pc = 0x3853A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3853A0u;
    // 0x3853a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD048u, 0x3853A0u, 0x3853A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3853A8u;
label_3853a8:
    // 0x3853a8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3853a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3853ac:
    // 0x3853ac: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3853ACu;
    {
        const bool branch_taken_0x3853ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3853ac) {
            ctx->pc = 0x3853B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3853ACu;
            // 0x3853b0: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3853C0u;
            goto label_3853c0;
        }
    }
    ctx->pc = 0x3853B4u;
    // 0x3853b4: 0xc0ef412  jal         func_3BD048
    ctx->pc = 0x3853B4u;
    SET_GPR_U32(ctx, 31, 0x3853BCu);
    ctx->pc = 0x3853B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3853B4u;
    // 0x3853b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD048u, 0x3853B4u, 0x3853BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3853BCu;
label_3853bc:
    // 0x3853bc: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x3853bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3853c0:
    // 0x3853c0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3853C0u;
    {
        const bool branch_taken_0x3853c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3853c0) {
            ctx->pc = 0x3853C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3853C0u;
            // 0x3853c4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3853D4u;
            goto label_3853d4;
        }
    }
    ctx->pc = 0x3853C8u;
    // 0x3853c8: 0xc0ef412  jal         func_3BD048
    ctx->pc = 0x3853C8u;
    SET_GPR_U32(ctx, 31, 0x3853D0u);
    ctx->pc = 0x3853CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3853C8u;
    // 0x3853cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD048u, 0x3853C8u, 0x3853D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3853D0u;
label_3853d0:
    // 0x3853d0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3853d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3853d4:
    // 0x3853d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3853D4u;
    {
        const bool branch_taken_0x3853d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3853D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3853D4u;
        // 0x3853d8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3853d4) {
            ctx->pc = 0x3853E8u;
            goto label_3853e8;
        }
    }
    ctx->pc = 0x3853DCu;
    // 0x3853dc: 0xc0ef412  jal         func_3BD048
    ctx->pc = 0x3853DCu;
    SET_GPR_U32(ctx, 31, 0x3853E4u);
    ctx->pc = 0x3853E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3853DCu;
    // 0x3853e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD048u, 0x3853DCu, 0x3853E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3853E4u;
label_3853e4:
    // 0x3853e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3853e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3853e8:
    // 0x3853e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3853e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3853ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3853ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3853f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3853f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3853f4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x3853f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3853f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3853F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3853FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3853F8u;
        // 0x3853fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3853F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385400u;
}
