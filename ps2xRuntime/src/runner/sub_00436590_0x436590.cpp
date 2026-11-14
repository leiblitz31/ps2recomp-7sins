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

// Function: sub_00436590
// Address: 0x436590 - 0x4366d0
void sub_00436590_0x436590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00436590_0x436590");
#endif

    ctx->pc = 0x436590u;

    // 0x436590: 0x3c0b0062  lui         $t3, 0x62
    ctx->pc = 0x436590u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)98 << 16));
    // 0x436594: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x436594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x436598: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x436598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x43659c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x43659cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4365a0: 0x8d644030  lw          $a0, 0x4030($t3)
    ctx->pc = 0x4365a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x624030u));
    // 0x4365a4: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x4365a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4365a8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x4365a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4365ac: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x4365ACu;
    {
        const bool branch_taken_0x4365ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4365B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4365ACu;
        // 0x4365b0: 0x25684030  addiu       $t0, $t3, 0x4030 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 16432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4365ac) {
            ctx->pc = 0x4366C8u;
            goto label_4366c8;
        }
    }
    ctx->pc = 0x4365B4u;
    // 0x4365b4: 0x8ca90004  lw          $t1, 0x4($a1)
    ctx->pc = 0x4365b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4365b8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x4365b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4365bc: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x4365bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x4365c0: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x4365c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4365c4: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x4365c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4365c8: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x4365C8u;
    {
        const bool branch_taken_0x4365c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4365c8) {
            ctx->pc = 0x4366C8u;
            goto label_4366c8;
        }
    }
    ctx->pc = 0x4365D0u;
    // 0x4365d0: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x4365d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x4365d4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4365d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4365d8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x4365d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4365dc: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x4365DCu;
    {
        const bool branch_taken_0x4365dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4365dc) {
            ctx->pc = 0x4366C8u;
            goto label_4366c8;
        }
    }
    ctx->pc = 0x4365E4u;
    // 0x4365e4: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x4365e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x4365e8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4365e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4365ec: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x4365ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4365f0: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x4365F0u;
    {
        const bool branch_taken_0x4365f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4365F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4365F0u;
        // 0x4365f4: 0xc4102a  slt         $v0, $a2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4365f0) {
            ctx->pc = 0x4366C8u;
            goto label_4366c8;
        }
    }
    ctx->pc = 0x4365F8u;
    // 0x4365f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4365F8u;
    {
        const bool branch_taken_0x4365f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4365FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4365F8u;
        // 0x4365fc: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4365f8) {
            ctx->pc = 0x43661Cu;
            goto label_43661c;
        }
    }
    ctx->pc = 0x436600u;
    // 0x436600: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x436600u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x436604: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x436604u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x436608: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x436608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x43660c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x43660cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x436610: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x436610u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x436614: 0x8d634030  lw          $v1, 0x4030($t3)
    ctx->pc = 0x436614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16432)));
    // 0x436618: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x436618u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_43661c:
    // 0x43661c: 0x8d624030  lw          $v0, 0x4030($t3)
    ctx->pc = 0x43661cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16432)));
    // 0x436620: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x436620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x436624: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x436624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x436628: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x436628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x43662c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x43662cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x436630: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x436630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x436634: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x436634u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x436638: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x436638u;
    {
        const bool branch_taken_0x436638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436638u;
        // 0x43663c: 0x461023  subu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436638) {
            ctx->pc = 0x436644u;
            goto label_436644;
        }
    }
    ctx->pc = 0x436640u;
    // 0x436640: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x436640u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_436644:
    // 0x436644: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x436644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x436648: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x436648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x43664c: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x43664cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x436650: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x436650u;
    {
        const bool branch_taken_0x436650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x436654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436650u;
        // 0x436654: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436650) {
            ctx->pc = 0x436678u;
            goto label_436678;
        }
    }
    ctx->pc = 0x436658u;
    // 0x436658: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x436658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x43665c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x43665cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x436660: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x436660u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x436664: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x436664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x436668: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x436668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x43666c: 0xad420004  sw          $v0, 0x4($t2)
    ctx->pc = 0x43666cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
    // 0x436670: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x436670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x436674: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x436674u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_436678:
    // 0x436678: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x436678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x43667c: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x43667cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x436680: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x436680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x436684: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x436684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x436688: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x436688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x43668c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x43668cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x436690: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x436690u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x436694: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x436694u;
    {
        const bool branch_taken_0x436694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x436698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436694u;
        // 0x436698: 0x461023  subu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436694) {
            ctx->pc = 0x4366A0u;
            goto label_4366a0;
        }
    }
    ctx->pc = 0x43669Cu;
    // 0x43669c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x43669cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_4366a0:
    // 0x4366a0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4366a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4366a4: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4366A4u;
    {
        const bool branch_taken_0x4366a4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x4366a4) {
            ctx->pc = 0x4366C8u;
            goto label_4366c8;
        }
    }
    ctx->pc = 0x4366ACu;
    // 0x4366ac: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x4366acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4366b0: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4366B0u;
    {
        const bool branch_taken_0x4366b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4366B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4366B0u;
        // 0x4366b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4366b0) {
            ctx->pc = 0x4366C8u;
            goto label_4366c8;
        }
    }
    ctx->pc = 0x4366B8u;
    // 0x4366b8: 0xad430008  sw          $v1, 0x8($t2)
    ctx->pc = 0x4366b8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 3));
    // 0x4366bc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x4366bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4366c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4366C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4366C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4366C0u;
        // 0x4366c4: 0xad43000c  sw          $v1, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4366C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4366C8u;
label_4366c8:
    // 0x4366c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4366C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4366CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4366C8u;
        // 0x4366cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4366C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4366D0u;
}
