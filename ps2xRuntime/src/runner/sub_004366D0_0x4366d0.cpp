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

// Function: sub_004366D0
// Address: 0x4366d0 - 0x4368b8
void sub_004366D0_0x4366d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004366D0_0x4366d0");
#endif

    ctx->pc = 0x4366d0u;

    // 0x4366d0: 0x3c0b0062  lui         $t3, 0x62
    ctx->pc = 0x4366d0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)98 << 16));
    // 0x4366d4: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x4366d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4366d8: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x4366d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4366dc: 0x256a4030  addiu       $t2, $t3, 0x4030
    ctx->pc = 0x4366dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 16432));
    // 0x4366e0: 0x8d634030  lw          $v1, 0x4030($t3)
    ctx->pc = 0x4366e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x624030u));
    // 0x4366e4: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x4366e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x4366e8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x4366e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4366ec: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x4366ECu;
    {
        const bool branch_taken_0x4366ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4366F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4366ECu;
        // 0x4366f0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4366ec) {
            ctx->pc = 0x4368A8u;
            goto label_4368a8;
        }
    }
    ctx->pc = 0x4366F4u;
    // 0x4366f4: 0x8ca90004  lw          $t1, 0x4($a1)
    ctx->pc = 0x4366f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4366f8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x4366f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4366fc: 0x8d440004  lw          $a0, 0x4($t2)
    ctx->pc = 0x4366fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x436700: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x436700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x436704: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x436704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x436708: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x436708u;
    {
        const bool branch_taken_0x436708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436708u;
        // 0x43670c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436708) {
            ctx->pc = 0x4368ACu;
            goto label_4368ac;
        }
    }
    ctx->pc = 0x436710u;
    // 0x436710: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x436710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x436714: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x436714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x436718: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x436718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x43671c: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x43671Cu;
    {
        const bool branch_taken_0x43671c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x436720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43671Cu;
        // 0x436720: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43671c) {
            ctx->pc = 0x4368ACu;
            goto label_4368ac;
        }
    }
    ctx->pc = 0x436724u;
    // 0x436724: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x436724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x436728: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x436728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x43672c: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x43672cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x436730: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x436730u;
    {
        const bool branch_taken_0x436730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x436734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436730u;
        // 0x436734: 0x103102a  slt         $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x436730) {
            ctx->pc = 0x4368A8u;
            goto label_4368a8;
        }
    }
    ctx->pc = 0x436738u;
    // 0x436738: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x436738u;
    {
        const bool branch_taken_0x436738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436738u;
        // 0x43673c: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436738) {
            ctx->pc = 0x436780u;
            goto label_436780;
        }
    }
    ctx->pc = 0x436740u;
    // 0x436740: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x436740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x436744: 0xc32023  subu        $a0, $a2, $v1
    ctx->pc = 0x436744u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x436748: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x436748u;
    {
        const bool branch_taken_0x436748 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x436748) {
            ctx->pc = 0x43674Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x436748u;
            // 0x43674c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x436750u;
            goto label_436750;
        }
    }
    ctx->pc = 0x436750u;
label_436750:
    // 0x436750: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x436750u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x436754: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x436754u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x436758: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x436758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x43675c: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x43675cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x436760: 0x1812  mflo        $v1
    ctx->pc = 0x436760u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x436764: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x436764u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x436768: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x436768u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x43676c: 0x8d644030  lw          $a0, 0x4030($t3)
    ctx->pc = 0x43676cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16432)));
    // 0x436770: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x436770u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x436774: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x436774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x436778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x436778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x43677c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x43677cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_436780:
    // 0x436780: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x436780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x436784: 0x8d644030  lw          $a0, 0x4030($t3)
    ctx->pc = 0x436784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16432)));
    // 0x436788: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x436788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x43678c: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x43678cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x436790: 0x464021  addu        $t0, $v0, $a2
    ctx->pc = 0x436790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x436794: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x436794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x436798: 0x88102a  slt         $v0, $a0, $t0
    ctx->pc = 0x436798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x43679c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x43679Cu;
    {
        const bool branch_taken_0x43679c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4367A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43679Cu;
        // 0x4367a0: 0x1041023  subu        $v0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43679c) {
            ctx->pc = 0x4367D0u;
            goto label_4367d0;
        }
    }
    ctx->pc = 0x4367A4u;
    // 0x4367a4: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x4367a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4367a8: 0xc22023  subu        $a0, $a2, $v0
    ctx->pc = 0x4367a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4367ac: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4367ACu;
    {
        const bool branch_taken_0x4367ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4367ac) {
            ctx->pc = 0x4367B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4367ACu;
            // 0x4367b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4367B4u;
            goto label_4367b4;
        }
    }
    ctx->pc = 0x4367B4u;
label_4367b4:
    // 0x4367b4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4367b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4367b8: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x4367b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x4367bc: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x4367bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4367c0: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x4367c0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x4367c4: 0x1012  mflo        $v0
    ctx->pc = 0x4367c4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4367c8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4367c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4367cc: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x4367ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_4367d0:
    // 0x4367d0: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x4367d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4367d4: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x4367d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x4367d8: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x4367d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4367dc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4367DCu;
    {
        const bool branch_taken_0x4367dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4367E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4367DCu;
        // 0x4367e0: 0x661023  subu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4367dc) {
            ctx->pc = 0x436828u;
            goto label_436828;
        }
    }
    ctx->pc = 0x4367E4u;
    // 0x4367e4: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x4367e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4367e8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x4367e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4367ec: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4367ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4367f0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4367F0u;
    {
        const bool branch_taken_0x4367f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4367f0) {
            ctx->pc = 0x4367F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4367F0u;
            // 0x4367f4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4367F8u;
            goto label_4367f8;
        }
    }
    ctx->pc = 0x4367F8u;
label_4367f8:
    // 0x4367f8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4367f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4367fc: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x4367fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x436800: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x436800u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x436804: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x436804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x436808: 0x2012  mflo        $a0
    ctx->pc = 0x436808u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x43680c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x43680cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x436810: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x436810u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x436814: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x436814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x436818: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x436818u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x43681c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x43681cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x436820: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x436820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x436824: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x436824u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_436828:
    // 0x436828: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x436828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x43682c: 0x8d44000c  lw          $a0, 0xC($t2)
    ctx->pc = 0x43682cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x436830: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x436830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x436834: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x436834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x436838: 0x464021  addu        $t0, $v0, $a2
    ctx->pc = 0x436838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x43683c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x43683cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x436840: 0x88102a  slt         $v0, $a0, $t0
    ctx->pc = 0x436840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x436844: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x436844u;
    {
        const bool branch_taken_0x436844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x436848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436844u;
        // 0x436848: 0x1041023  subu        $v0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436844) {
            ctx->pc = 0x436878u;
            goto label_436878;
        }
    }
    ctx->pc = 0x43684Cu;
    // 0x43684c: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x43684cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x436850: 0xc22023  subu        $a0, $a2, $v0
    ctx->pc = 0x436850u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x436854: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x436854u;
    {
        const bool branch_taken_0x436854 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x436854) {
            ctx->pc = 0x436858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x436854u;
            // 0x436858: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43685Cu;
            goto label_43685c;
        }
    }
    ctx->pc = 0x43685Cu;
label_43685c:
    // 0x43685c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x43685cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x436860: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x436860u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x436864: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x436864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x436868: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x436868u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x43686c: 0x1012  mflo        $v0
    ctx->pc = 0x43686cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x436870: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x436870u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x436874: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x436874u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
label_436878:
    // 0x436878: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x436878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x43687c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x43687Cu;
    {
        const bool branch_taken_0x43687c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x436880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43687Cu;
        // 0x436880: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43687c) {
            ctx->pc = 0x4368ACu;
            goto label_4368ac;
        }
    }
    ctx->pc = 0x436884u;
    // 0x436884: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x436884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x436888: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x436888u;
    {
        const bool branch_taken_0x436888 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436888u;
        // 0x43688c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436888) {
            ctx->pc = 0x4368ACu;
            goto label_4368ac;
        }
    }
    ctx->pc = 0x436890u;
    // 0x436890: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x436890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x436894: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x436894u;
    {
        const bool branch_taken_0x436894 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x436898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436894u;
        // 0x436898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436894) {
            ctx->pc = 0x4368ACu;
            goto label_4368ac;
        }
    }
    ctx->pc = 0x43689Cu;
    // 0x43689c: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x43689cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4368a0: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4368A0u;
    {
        const bool branch_taken_0x4368a0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x4368A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4368A0u;
        // 0x4368a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4368a0) {
            ctx->pc = 0x4368ACu;
            goto label_4368ac;
        }
    }
    ctx->pc = 0x4368A8u;
label_4368a8:
    // 0x4368a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4368a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4368ac:
    // 0x4368ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4368ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4368ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4368B4u;
    // 0x4368b4: 0x0  nop
    ctx->pc = 0x4368b4u;
    // NOP
    ctx->pc = 0x4368b8u;
}
