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

// Function: sub_003FD1B0
// Address: 0x3fd1b0 - 0x3fd288
void sub_003FD1B0_0x3fd1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FD1B0_0x3fd1b0");
#endif

    switch (ctx->pc) {
        case 0x3fd240u: goto label_3fd240;
        default: break;
    }

    ctx->pc = 0x3fd1b0u;

    // 0x3fd1b0: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x3fd1b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3fd1b4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x3fd1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3fd1b8: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3FD1B8u;
    {
        const bool branch_taken_0x3fd1b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fd1b8) {
            ctx->pc = 0x3FD280u;
            goto label_3fd280;
        }
    }
    ctx->pc = 0x3FD1C0u;
    // 0x3fd1c0: 0xdc890008  ld          $t1, 0x8($a0)
    ctx->pc = 0x3fd1c0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3fd1c4: 0x1120002e  beqz        $t1, . + 4 + (0x2E << 2)
    ctx->pc = 0x3FD1C4u;
    {
        const bool branch_taken_0x3fd1c4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD1C4u;
        // 0x3fd1c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd1c4) {
            ctx->pc = 0x3FD280u;
            goto label_3fd280;
        }
    }
    ctx->pc = 0x3FD1CCu;
    // 0x3fd1cc: 0x31230003  andi        $v1, $t1, 0x3
    ctx->pc = 0x3fd1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
    // 0x3fd1d0: 0x19200012  blez        $t1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3FD1D0u;
    {
        const bool branch_taken_0x3fd1d0 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3FD1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD1D0u;
        // 0x3fd1d4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd1d0) {
            ctx->pc = 0x3FD21Cu;
            goto label_3fd21c;
        }
    }
    ctx->pc = 0x3FD1D8u;
    // 0x3fd1d8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3FD1D8u;
    {
        const bool branch_taken_0x3fd1d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD1D8u;
        // 0x3fd1dc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd1d8) {
            ctx->pc = 0x3FD238u;
            goto label_3fd238;
        }
    }
    ctx->pc = 0x3FD1E0u;
    // 0x3fd1e0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3FD1E0u;
    {
        const bool branch_taken_0x3fd1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fd1e0) {
            ctx->pc = 0x3FD1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FD1E0u;
            // 0x3fd1e4: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FD220u;
            goto label_3fd220;
        }
    }
    ctx->pc = 0x3FD1E8u;
    // 0x3fd1e8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3fd1e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3fd1ec: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FD1ECu;
    {
        const bool branch_taken_0x3fd1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fd1ec) {
            ctx->pc = 0x3FD1F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FD1ECu;
            // 0x3fd1f0: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FD20Cu;
            goto label_3fd20c;
        }
    }
    ctx->pc = 0x3FD1F4u;
    // 0x3fd1f4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3fd1f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fd1f8: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x3fd1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fd1fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3fd1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fd200: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3fd200u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3fd204: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3fd204u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fd208: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3fd208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3fd20c:
    // 0x3fd20c: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x3fd20cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x3fd210: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3fd210u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3fd214: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3fd214u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fd218: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3fd218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3fd21c:
    // 0x3fd21c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3fd21cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3fd220:
    // 0x3fd220: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x3fd220u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x3fd224: 0xe9402b  sltu        $t0, $a3, $t1
    ctx->pc = 0x3fd224u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3fd228: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3fd228u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3fd22c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3fd22cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fd230: 0x11000013  beqz        $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3FD230u;
    {
        const bool branch_taken_0x3fd230 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD230u;
        // 0x3fd234: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd230) {
            ctx->pc = 0x3FD280u;
            goto label_3fd280;
        }
    }
    ctx->pc = 0x3FD238u;
label_3fd238:
    // 0x3fd238: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3fd238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd23c: 0x0  nop
    ctx->pc = 0x3fd23cu;
    // NOP
label_3fd240:
    // 0x3fd240: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x3fd240u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3fd244: 0x64e70004  daddiu      $a3, $a3, 0x4
    ctx->pc = 0x3fd244u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)4);
    // 0x3fd248: 0x90c50001  lbu         $a1, 0x1($a2)
    ctx->pc = 0x3fd248u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3fd24c: 0xe9402b  sltu        $t0, $a3, $t1
    ctx->pc = 0x3fd24cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3fd250: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x3fd250u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3fd254: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x3fd254u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x3fd258: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x3fd258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x3fd25c: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x3fd25cu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x3fd260: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x3fd260u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x3fd264: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x3fd264u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3fd268: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3fd268u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3fd26c: 0xa0c50001  sb          $a1, 0x1($a2)
    ctx->pc = 0x3fd26cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x3fd270: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x3fd270u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fd274: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x3fd274u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fd278: 0x1500fff1  bnez        $t0, . + 4 + (-0xF << 2)
    ctx->pc = 0x3FD278u;
    {
        const bool branch_taken_0x3fd278 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FD27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD278u;
        // 0x3fd27c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd278) {
            ctx->pc = 0x3FD240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fd240;
        }
    }
    ctx->pc = 0x3FD280u;
label_3fd280:
    // 0x3fd280: 0x3e00008  jr          $ra
    ctx->pc = 0x3FD280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FD280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FD288u;
}
