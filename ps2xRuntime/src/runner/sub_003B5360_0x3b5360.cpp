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

// Function: sub_003B5360
// Address: 0x3b5360 - 0x3b53d8
void sub_003B5360_0x3b5360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5360_0x3b5360");
#endif

    switch (ctx->pc) {
        case 0x3b537cu: goto label_3b537c;
        case 0x3b53a4u: goto label_3b53a4;
        case 0x3b53b8u: goto label_3b53b8;
        default: break;
    }

    ctx->pc = 0x3b5360u;

    // 0x3b5360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b5360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b5364: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3b5364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3b5368: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b5368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3b536c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b536cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5370: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b5370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b5374: 0xc0ec604  jal         func_3B1810
    ctx->pc = 0x3B5374u;
    SET_GPR_U32(ctx, 31, 0x3B537Cu);
    ctx->pc = 0x3B5378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5374u;
    // 0x3b5378: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1810u, 0x3B5374u, 0x3B537Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B537Cu;
label_3b537c:
    // 0x3b537c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3b537cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b5380: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x3b5380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3b5384: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x3b5384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x3b5388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b5388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b538c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3b538cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x3b5390: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3b5390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5394: 0x240501a1  addiu       $a1, $zero, 0x1A1
    ctx->pc = 0x3b5394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 417));
    // 0x3b5398: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x3b5398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x3b539c: 0xc103322  jal         func_40CC88
    ctx->pc = 0x3B539Cu;
    SET_GPR_U32(ctx, 31, 0x3B53A4u);
    ctx->pc = 0x3B53A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B539Cu;
    // 0x3b53a0: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3B539Cu, 0x3B53A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B53A4u;
label_3b53a4:
    // 0x3b53a4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B53A4u;
    {
        const bool branch_taken_0x3b53a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b53a4) {
            ctx->pc = 0x3B53A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B53A4u;
            // 0x3b53a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B53C0u;
            goto label_3b53c0;
        }
    }
    ctx->pc = 0x3B53ACu;
    // 0x3b53ac: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x3b53acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x3b53b0: 0xc0ec93a  jal         func_3B24E8
    ctx->pc = 0x3B53B0u;
    SET_GPR_U32(ctx, 31, 0x3B53B8u);
    ctx->pc = 0x3B53B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B53B0u;
    // 0x3b53b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B24E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B24E8u, 0x3B53B0u, 0x3B53B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B53B8u;
label_3b53b8:
    // 0x3b53b8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x3b53b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x3b53bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b53bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b53c0:
    // 0x3b53c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3b53c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b53c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b53c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b53c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b53c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b53cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B53CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B53D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B53CCu;
        // 0x3b53d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B53CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B53D4u;
    // 0x3b53d4: 0x0  nop
    ctx->pc = 0x3b53d4u;
    // NOP
    ctx->pc = 0x3b53d8u;
}
