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

// Function: sub_003FCF58
// Address: 0x3fcf58 - 0x3fd078
void sub_003FCF58_0x3fcf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FCF58_0x3fcf58");
#endif

    switch (ctx->pc) {
        case 0x3fcf80u: goto label_3fcf80;
        case 0x3fd010u: goto label_3fd010;
        default: break;
    }

    ctx->pc = 0x3fcf58u;

    // 0x3fcf58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3fcf58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3fcf5c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3fcf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3fcf60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3fcf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3fcf64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3fcf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3fcf68: 0x90830011  lbu         $v1, 0x11($a0)
    ctx->pc = 0x3fcf68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x3fcf6c: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x3FCF6Cu;
    {
        const bool branch_taken_0x3fcf6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FCF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCF6Cu;
        // 0x3fcf70: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcf6c) {
            ctx->pc = 0x3FD068u;
            goto label_3fd068;
        }
    }
    ctx->pc = 0x3FCF74u;
    // 0x3fcf74: 0x90850012  lbu         $a1, 0x12($a0)
    ctx->pc = 0x3fcf74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x3fcf78: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3FCF78u;
    SET_GPR_U32(ctx, 31, 0x3FCF80u);
    ctx->pc = 0x3FCF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCF78u;
    // 0x3fcf7c: 0xdc840000  ld          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3FCF78u, 0x3FCF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCF80u;
label_3fcf80:
    // 0x3fcf80: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3fcf80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcf84: 0x11200038  beqz        $t1, . + 4 + (0x38 << 2)
    ctx->pc = 0x3FCF84u;
    {
        const bool branch_taken_0x3fcf84 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCF84u;
        // 0x3fcf88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcf84) {
            ctx->pc = 0x3FD068u;
            goto label_3fd068;
        }
    }
    ctx->pc = 0x3FCF8Cu;
    // 0x3fcf8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fcf8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcf90: 0x31230003  andi        $v1, $t1, 0x3
    ctx->pc = 0x3fcf90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
    // 0x3fcf94: 0x19200014  blez        $t1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3FCF94u;
    {
        const bool branch_taken_0x3fcf94 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3FCF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCF94u;
        // 0x3fcf98: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcf94) {
            ctx->pc = 0x3FCFE8u;
            goto label_3fcfe8;
        }
    }
    ctx->pc = 0x3FCF9Cu;
    // 0x3fcf9c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3FCF9Cu;
    {
        const bool branch_taken_0x3fcf9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCF9Cu;
        // 0x3fcfa0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcf9c) {
            ctx->pc = 0x3FD008u;
            goto label_3fd008;
        }
    }
    ctx->pc = 0x3FCFA4u;
    // 0x3fcfa4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3FCFA4u;
    {
        const bool branch_taken_0x3fcfa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fcfa4) {
            ctx->pc = 0x3FCFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FCFA4u;
            // 0x3fcfa8: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FCFECu;
            goto label_3fcfec;
        }
    }
    ctx->pc = 0x3FCFACu;
    // 0x3fcfac: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3fcfacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3fcfb0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3FCFB0u;
    {
        const bool branch_taken_0x3fcfb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fcfb0) {
            ctx->pc = 0x3FCFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FCFB0u;
            // 0x3fcfb4: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FCFD4u;
            goto label_3fcfd4;
        }
    }
    ctx->pc = 0x3FCFB8u;
    // 0x3fcfb8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3fcfb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fcfbc: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x3fcfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3fcfc0: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x3fcfc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3fcfc4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3fcfc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fcfc8: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x3fcfc8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fcfcc: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3fcfccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fcfd0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3fcfd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3fcfd4:
    // 0x3fcfd4: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x3fcfd4u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x3fcfd8: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x3fcfd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3fcfdc: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x3fcfdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fcfe0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3fcfe0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fcfe4: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3fcfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_3fcfe8:
    // 0x3fcfe8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3fcfe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3fcfec:
    // 0x3fcfec: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x3fcfecu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x3fcff0: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x3fcff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3fcff4: 0xe9402b  sltu        $t0, $a3, $t1
    ctx->pc = 0x3fcff4u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3fcff8: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x3fcff8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fcffc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3fcffcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fd000: 0x11000019  beqz        $t0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3FD000u;
    {
        const bool branch_taken_0x3fd000 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD000u;
        // 0x3fd004: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd000) {
            ctx->pc = 0x3FD068u;
            goto label_3fd068;
        }
    }
    ctx->pc = 0x3FD008u;
label_3fd008:
    // 0x3fd008: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3fd008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd00c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3fd00cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fd010:
    // 0x3fd010: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x3fd010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3fd014: 0x64e70004  daddiu      $a3, $a3, 0x4
    ctx->pc = 0x3fd014u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)4);
    // 0x3fd018: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3fd018u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3fd01c: 0xe9402b  sltu        $t0, $a3, $t1
    ctx->pc = 0x3fd01cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3fd020: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3fd020u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fd024: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x3fd024u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fd028: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x3fd028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x3fd02c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3fd02cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3fd030: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x3fd030u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fd034: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x3fd034u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fd038: 0x90c20005  lbu         $v0, 0x5($a2)
    ctx->pc = 0x3fd038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x3fd03c: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x3fd03cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3fd040: 0xa0820004  sb          $v0, 0x4($a0)
    ctx->pc = 0x3fd040u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fd044: 0xa0a30005  sb          $v1, 0x5($a1)
    ctx->pc = 0x3fd044u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fd048: 0x90c20007  lbu         $v0, 0x7($a2)
    ctx->pc = 0x3fd048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x3fd04c: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x3fd04cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x3fd050: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3fd050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3fd054: 0xa0820006  sb          $v0, 0x6($a0)
    ctx->pc = 0x3fd054u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fd058: 0xa0a30007  sb          $v1, 0x7($a1)
    ctx->pc = 0x3fd058u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fd05c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3fd05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3fd060: 0x1500ffeb  bnez        $t0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3FD060u;
    {
        const bool branch_taken_0x3fd060 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FD064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD060u;
        // 0x3fd064: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd060) {
            ctx->pc = 0x3FD010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fd010;
        }
    }
    ctx->pc = 0x3FD068u;
label_3fd068:
    // 0x3fd068: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3fd068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fd06c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fd06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fd070: 0x3e00008  jr          $ra
    ctx->pc = 0x3FD070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FD074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD070u;
        // 0x3fd074: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FD070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FD078u;
}
