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

// Function: sub_003B5220
// Address: 0x3b5220 - 0x3b5300
void sub_003B5220_0x3b5220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5220_0x3b5220");
#endif

    switch (ctx->pc) {
        case 0x3b5238u: goto label_3b5238;
        case 0x3b5244u: goto label_3b5244;
        case 0x3b5278u: goto label_3b5278;
        case 0x3b5288u: goto label_3b5288;
        case 0x3b5298u: goto label_3b5298;
        case 0x3b52c0u: goto label_3b52c0;
        case 0x3b52d8u: goto label_3b52d8;
        default: break;
    }

    ctx->pc = 0x3b5220u;

    // 0x3b5220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b5220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b5224: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b5224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b5228: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b5228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3b522c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b522cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b5230: 0xc0ed30a  jal         func_3B4C28
    ctx->pc = 0x3B5230u;
    SET_GPR_U32(ctx, 31, 0x3B5238u);
    ctx->pc = 0x3B5234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5230u;
    // 0x3b5234: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4C28u, 0x3B5230u, 0x3B5238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5238u;
label_3b5238:
    // 0x3b5238: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x3b5238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x3b523c: 0xc0ec6a4  jal         func_3B1A90
    ctx->pc = 0x3B523Cu;
    SET_GPR_U32(ctx, 31, 0x3B5244u);
    ctx->pc = 0x3B5240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B523Cu;
    // 0x3b5240: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A90u, 0x3B523Cu, 0x3B5244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5244u;
label_3b5244:
    // 0x3b5244: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3b5244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3b5248: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b5248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b524c: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x3b524cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x3b5250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b5250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b5254: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b5254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b5258: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5258u;
        // 0x3b525c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5260u;
    // 0x3b5260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b5260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b5264: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b5264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3b5268: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3b5268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3b526c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b526cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b5270: 0xc0ed294  jal         func_3B4A50
    ctx->pc = 0x3B5270u;
    SET_GPR_U32(ctx, 31, 0x3B5278u);
    ctx->pc = 0x3B5274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5270u;
    // 0x3b5274: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4A50u, 0x3B5270u, 0x3B5278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5278u;
label_3b5278:
    // 0x3b5278: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b5278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b527c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b527cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5280: 0xc0ed340  jal         func_3B4D00
    ctx->pc = 0x3B5280u;
    SET_GPR_U32(ctx, 31, 0x3B5288u);
    ctx->pc = 0x3B5284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5280u;
    // 0x3b5284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4D00u, 0x3B5280u, 0x3B5288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5288u;
label_3b5288:
    // 0x3b5288: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3B5288u;
    {
        const bool branch_taken_0x3b5288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5288u;
        // 0x3b528c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5288) {
            ctx->pc = 0x3B52ECu;
            goto label_3b52ec;
        }
    }
    ctx->pc = 0x3B5290u;
    // 0x3b5290: 0xc0ec604  jal         func_3B1810
    ctx->pc = 0x3B5290u;
    SET_GPR_U32(ctx, 31, 0x3B5298u);
    ctx->pc = 0x3B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1810u, 0x3B5290u, 0x3B5298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5298u;
label_3b5298:
    // 0x3b5298: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3b5298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b529c: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x3b529cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3b52a0: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x3b52a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x3b52a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b52a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b52a8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3b52a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x3b52ac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3b52acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b52b0: 0x240501a1  addiu       $a1, $zero, 0x1A1
    ctx->pc = 0x3b52b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 417));
    // 0x3b52b4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x3b52b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x3b52b8: 0xc103322  jal         func_40CC88
    ctx->pc = 0x3B52B8u;
    SET_GPR_U32(ctx, 31, 0x3B52C0u);
    ctx->pc = 0x3B52BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B52B8u;
    // 0x3b52bc: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3B52B8u, 0x3B52C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B52C0u;
label_3b52c0:
    // 0x3b52c0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B52C0u;
    {
        const bool branch_taken_0x3b52c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b52c0) {
            ctx->pc = 0x3B52C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B52C0u;
            // 0x3b52c4: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B52D0u;
            goto label_3b52d0;
        }
    }
    ctx->pc = 0x3B52C8u;
    // 0x3b52c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B52C8u;
    {
        const bool branch_taken_0x3b52c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B52CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B52C8u;
        // 0x3b52cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b52c8) {
            ctx->pc = 0x3B52E4u;
            goto label_3b52e4;
        }
    }
    ctx->pc = 0x3B52D0u;
label_3b52d0:
    // 0x3b52d0: 0xc0ec93a  jal         func_3B24E8
    ctx->pc = 0x3B52D0u;
    SET_GPR_U32(ctx, 31, 0x3B52D8u);
    ctx->pc = 0x3B52D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B52D0u;
    // 0x3b52d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B24E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B24E8u, 0x3B52D0u, 0x3B52D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B52D8u;
label_3b52d8:
    // 0x3b52d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3b52d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b52dc: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x3b52dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x3b52e0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3b52e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3b52e4:
    // 0x3b52e4: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x3b52e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x3b52e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b52e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b52ec:
    // 0x3b52ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3b52ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b52f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b52f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b52f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b52f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b52f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B52F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B52FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B52F8u;
        // 0x3b52fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B52F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5300u;
}
