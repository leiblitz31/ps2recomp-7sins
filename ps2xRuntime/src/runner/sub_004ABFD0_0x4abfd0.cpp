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

// Function: sub_004ABFD0
// Address: 0x4abfd0 - 0x4ac1a0
void sub_004ABFD0_0x4abfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ABFD0_0x4abfd0");
#endif

    switch (ctx->pc) {
        case 0x4abfe4u: goto label_4abfe4;
        case 0x4ac00cu: goto label_4ac00c;
        case 0x4ac024u: goto label_4ac024;
        case 0x4ac044u: goto label_4ac044;
        case 0x4ac074u: goto label_4ac074;
        case 0x4ac09cu: goto label_4ac09c;
        case 0x4ac0b4u: goto label_4ac0b4;
        case 0x4ac0d4u: goto label_4ac0d4;
        case 0x4ac104u: goto label_4ac104;
        case 0x4ac12cu: goto label_4ac12c;
        case 0x4ac144u: goto label_4ac144;
        case 0x4ac164u: goto label_4ac164;
        case 0x4ac194u: goto label_4ac194;
        default: break;
    }

    ctx->pc = 0x4abfd0u;

    // 0x4abfd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4abfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4abfd4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4abfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4abfd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4abfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4abfdc: 0xc127608  jal         func_49D820
    ctx->pc = 0x4ABFDCu;
    SET_GPR_U32(ctx, 31, 0x4ABFE4u);
    ctx->pc = 0x4ABFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABFDCu;
    // 0x4abfe0: 0x24848948  addiu       $a0, $a0, -0x76B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D820u, 0x4ABFDCu, 0x4ABFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABFE4u;
label_4abfe4:
    // 0x4abfe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4abfe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4abfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x4ABFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ABFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABFE8u;
        // 0x4abfec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ABFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ABFF0u;
    // 0x4abff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4abff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4abff4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4abff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4abff8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4abff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4abffc: 0x24508970  addiu       $s0, $v0, -0x7690
    ctx->pc = 0x4abffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936944));
    // 0x4ac000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac004: 0xc1275de  jal         func_49D778
    ctx->pc = 0x4AC004u;
    SET_GPR_U32(ctx, 31, 0x4AC00Cu);
    ctx->pc = 0x4AC008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC004u;
    // 0x4ac008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D778u, 0x4AC004u, 0x4AC00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC00Cu;
label_4ac00c:
    // 0x4ac00c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4AC00Cu;
    {
        const bool branch_taken_0x4ac00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC00Cu;
        // 0x4ac010: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac00c) {
            ctx->pc = 0x4AC04Cu;
            goto label_4ac04c;
        }
    }
    ctx->pc = 0x4AC014u;
    // 0x4ac014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ac014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac018: 0x24a52780  addiu       $a1, $a1, 0x2780
    ctx->pc = 0x4ac018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10112));
    // 0x4ac01c: 0xc1275ba  jal         func_49D6E8
    ctx->pc = 0x4AC01Cu;
    SET_GPR_U32(ctx, 31, 0x4AC024u);
    ctx->pc = 0x4AC020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC01Cu;
    // 0x4ac020: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D6E8u, 0x4AC01Cu, 0x4AC024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC024u;
label_4ac024:
    // 0x4ac024: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4ac024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x4ac028: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x4ac028u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
    // 0x4ac02c: 0x24a56948  addiu       $a1, $a1, 0x6948
    ctx->pc = 0x4ac02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26952));
    // 0x4ac030: 0x24e76a38  addiu       $a3, $a3, 0x6A38
    ctx->pc = 0x4ac030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27192));
    // 0x4ac034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ac034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac038: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x4ac038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4ac03c: 0xc12776a  jal         func_49DDA8
    ctx->pc = 0x4AC03Cu;
    SET_GPR_U32(ctx, 31, 0x4AC044u);
    ctx->pc = 0x4AC040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC03Cu;
    // 0x4ac040: 0x2408000d  addiu       $t0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49DDA8u, 0x4AC03Cu, 0x4AC044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC044u;
label_4ac044:
    // 0x4ac044: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4AC044u;
    {
        const bool branch_taken_0x4ac044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC044u;
        // 0x4ac048: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac044) {
            ctx->pc = 0x4AC050u;
            goto label_4ac050;
        }
    }
    ctx->pc = 0x4AC04Cu;
label_4ac04c:
    // 0x4ac04c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4ac04cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ac050:
    // 0x4ac050: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ac050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ac054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac058: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC058u;
        // 0x4ac05c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC060u;
    // 0x4ac060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ac060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ac064: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4ac064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4ac068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac06c: 0xc127608  jal         func_49D820
    ctx->pc = 0x4AC06Cu;
    SET_GPR_U32(ctx, 31, 0x4AC074u);
    ctx->pc = 0x4AC070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC06Cu;
    // 0x4ac070: 0x24848970  addiu       $a0, $a0, -0x7690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D820u, 0x4AC06Cu, 0x4AC074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC074u;
label_4ac074:
    // 0x4ac074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac078: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC078u;
        // 0x4ac07c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC080u;
    // 0x4ac080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ac080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ac084: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4ac084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4ac088: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ac088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4ac08c: 0x24508998  addiu       $s0, $v0, -0x7668
    ctx->pc = 0x4ac08cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936984));
    // 0x4ac090: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac094: 0xc1275de  jal         func_49D778
    ctx->pc = 0x4AC094u;
    SET_GPR_U32(ctx, 31, 0x4AC09Cu);
    ctx->pc = 0x4AC098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC094u;
    // 0x4ac098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D778u, 0x4AC094u, 0x4AC09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC09Cu;
label_4ac09c:
    // 0x4ac09c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4AC09Cu;
    {
        const bool branch_taken_0x4ac09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC09Cu;
        // 0x4ac0a0: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac09c) {
            ctx->pc = 0x4AC0DCu;
            goto label_4ac0dc;
        }
    }
    ctx->pc = 0x4AC0A4u;
    // 0x4ac0a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ac0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac0a8: 0x24a52810  addiu       $a1, $a1, 0x2810
    ctx->pc = 0x4ac0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10256));
    // 0x4ac0ac: 0xc1275ba  jal         func_49D6E8
    ctx->pc = 0x4AC0ACu;
    SET_GPR_U32(ctx, 31, 0x4AC0B4u);
    ctx->pc = 0x4AC0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC0ACu;
    // 0x4ac0b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D6E8u, 0x4AC0ACu, 0x4AC0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC0B4u;
label_4ac0b4:
    // 0x4ac0b4: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4ac0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x4ac0b8: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x4ac0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
    // 0x4ac0bc: 0x24a56b40  addiu       $a1, $a1, 0x6B40
    ctx->pc = 0x4ac0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27456));
    // 0x4ac0c0: 0x24e76be0  addiu       $a3, $a3, 0x6BE0
    ctx->pc = 0x4ac0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27616));
    // 0x4ac0c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ac0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac0c8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x4ac0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4ac0cc: 0xc12776a  jal         func_49DDA8
    ctx->pc = 0x4AC0CCu;
    SET_GPR_U32(ctx, 31, 0x4AC0D4u);
    ctx->pc = 0x4AC0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC0CCu;
    // 0x4ac0d0: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49DDA8u, 0x4AC0CCu, 0x4AC0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC0D4u;
label_4ac0d4:
    // 0x4ac0d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4AC0D4u;
    {
        const bool branch_taken_0x4ac0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC0D4u;
        // 0x4ac0d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac0d4) {
            ctx->pc = 0x4AC0E0u;
            goto label_4ac0e0;
        }
    }
    ctx->pc = 0x4AC0DCu;
label_4ac0dc:
    // 0x4ac0dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4ac0dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ac0e0:
    // 0x4ac0e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ac0e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ac0e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC0E8u;
        // 0x4ac0ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC0F0u;
    // 0x4ac0f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ac0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ac0f4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4ac0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4ac0f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac0fc: 0xc127608  jal         func_49D820
    ctx->pc = 0x4AC0FCu;
    SET_GPR_U32(ctx, 31, 0x4AC104u);
    ctx->pc = 0x4AC100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC0FCu;
    // 0x4ac100: 0x24848998  addiu       $a0, $a0, -0x7668 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D820u, 0x4AC0FCu, 0x4AC104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC104u;
label_4ac104:
    // 0x4ac104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac108: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC108u;
        // 0x4ac10c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC110u;
    // 0x4ac110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ac110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ac114: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4ac114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4ac118: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ac118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4ac11c: 0x245089c0  addiu       $s0, $v0, -0x7640
    ctx->pc = 0x4ac11cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937024));
    // 0x4ac120: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac124: 0xc1275de  jal         func_49D778
    ctx->pc = 0x4AC124u;
    SET_GPR_U32(ctx, 31, 0x4AC12Cu);
    ctx->pc = 0x4AC128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC124u;
    // 0x4ac128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D778u, 0x4AC124u, 0x4AC12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC12Cu;
label_4ac12c:
    // 0x4ac12c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4AC12Cu;
    {
        const bool branch_taken_0x4ac12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC12Cu;
        // 0x4ac130: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac12c) {
            ctx->pc = 0x4AC16Cu;
            goto label_4ac16c;
        }
    }
    ctx->pc = 0x4AC134u;
    // 0x4ac134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ac134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac138: 0x24a52930  addiu       $a1, $a1, 0x2930
    ctx->pc = 0x4ac138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10544));
    // 0x4ac13c: 0xc1275ba  jal         func_49D6E8
    ctx->pc = 0x4AC13Cu;
    SET_GPR_U32(ctx, 31, 0x4AC144u);
    ctx->pc = 0x4AC140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC13Cu;
    // 0x4ac140: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D6E8u, 0x4AC13Cu, 0x4AC144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC144u;
label_4ac144:
    // 0x4ac144: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4ac144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x4ac148: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x4ac148u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
    // 0x4ac14c: 0x24a56c98  addiu       $a1, $a1, 0x6C98
    ctx->pc = 0x4ac14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27800));
    // 0x4ac150: 0x24e76d10  addiu       $a3, $a3, 0x6D10
    ctx->pc = 0x4ac150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27920));
    // 0x4ac154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ac154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac158: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4ac158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4ac15c: 0xc12776a  jal         func_49DDA8
    ctx->pc = 0x4AC15Cu;
    SET_GPR_U32(ctx, 31, 0x4AC164u);
    ctx->pc = 0x4AC160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC15Cu;
    // 0x4ac160: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49DDA8u, 0x4AC15Cu, 0x4AC164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC164u;
label_4ac164:
    // 0x4ac164: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4AC164u;
    {
        const bool branch_taken_0x4ac164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC164u;
        // 0x4ac168: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac164) {
            ctx->pc = 0x4AC170u;
            goto label_4ac170;
        }
    }
    ctx->pc = 0x4AC16Cu;
label_4ac16c:
    // 0x4ac16c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4ac16cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ac170:
    // 0x4ac170: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ac170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ac174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac178: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC178u;
        // 0x4ac17c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC180u;
    // 0x4ac180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ac180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ac184: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4ac184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4ac188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac18c: 0xc127608  jal         func_49D820
    ctx->pc = 0x4AC18Cu;
    SET_GPR_U32(ctx, 31, 0x4AC194u);
    ctx->pc = 0x4AC190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC18Cu;
    // 0x4ac190: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D820u, 0x4AC18Cu, 0x4AC194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC194u;
label_4ac194:
    // 0x4ac194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac198: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC198u;
        // 0x4ac19c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC1A0u;
}
