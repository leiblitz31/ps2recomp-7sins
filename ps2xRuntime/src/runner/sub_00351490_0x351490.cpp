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

// Function: sub_00351490
// Address: 0x351490 - 0x3518f0
void sub_00351490_0x351490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351490_0x351490");
#endif

    switch (ctx->pc) {
        case 0x351500u: goto label_351500;
        case 0x351588u: goto label_351588;
        case 0x351630u: goto label_351630;
        default: break;
    }

    ctx->pc = 0x351490u;

    // 0x351490: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x351490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x351494: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x351494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x351498: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x351498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x35149c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x35149cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3514a0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3514a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3514a4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3514a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3514a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3514a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3514ac: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3514acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3514b0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3514b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3514b4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3514b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3514b8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3514b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3514bc: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3514bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3514c0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3514c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x3514c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3514c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3514c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3514c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3514cc: 0x24660050  addiu       $a2, $v1, 0x50
    ctx->pc = 0x3514ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x3514d0: 0x8cd1004c  lw          $s1, 0x4C($a2)
    ctx->pc = 0x3514d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x3514d4: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x3514d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x3514d8: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x3514D8u;
    {
        const bool branch_taken_0x3514d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3514DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3514D8u;
        // 0x3514dc: 0x8cc70058  lw          $a3, 0x58($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3514d8) {
            ctx->pc = 0x351690u;
            goto label_351690;
        }
    }
    ctx->pc = 0x3514E0u;
    // 0x3514e0: 0x24730054  addiu       $s3, $v1, 0x54
    ctx->pc = 0x3514e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x3514e4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3514e4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3514e8: 0x26320140  addiu       $s2, $s1, 0x140
    ctx->pc = 0x3514e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x3514ec: 0x3c1e5000  lui         $fp, 0x5000
    ctx->pc = 0x3514ecu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)20480 << 16));
    // 0x3514f0: 0x3c170300  lui         $s7, 0x300
    ctx->pc = 0x3514f0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)768 << 16));
    // 0x3514f4: 0x3c160200  lui         $s6, 0x200
    ctx->pc = 0x3514f4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)512 << 16));
    // 0x3514f8: 0x24150024  addiu       $s5, $zero, 0x24
    ctx->pc = 0x3514f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3514fc: 0xc2140  sll         $a0, $t4, 5
    ctx->pc = 0x3514fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_351500:
    // 0x351500: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x351500u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351504: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x351504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x351508: 0x25940001  addiu       $s4, $t4, 0x1
    ctx->pc = 0x351508u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x35150c: 0xac9e0000  sw          $fp, 0x0($a0)
    ctx->pc = 0x35150cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 30));
    // 0x351510: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x351510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x351514: 0xac970008  sw          $s7, 0x8($a0)
    ctx->pc = 0x351514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 23));
    // 0x351518: 0x8e2200fc  lw          $v0, 0xFC($s1)
    ctx->pc = 0x351518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x35151c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x35151cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x351520: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x351520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x351524: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x351524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x351528: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x351528u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x35152c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x35152cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x351530: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x351530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x351534: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x351534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x351538: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x351538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x35153c: 0x8e2600fc  lw          $a2, 0xFC($s1)
    ctx->pc = 0x35153cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x351540: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x351540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x351544: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x351544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x351548: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x351548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x35154c: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x35154cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x351550: 0x8e230124  lw          $v1, 0x124($s1)
    ctx->pc = 0x351550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x351554: 0x8e240128  lw          $a0, 0x128($s1)
    ctx->pc = 0x351554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x351558: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x351558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x35155c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x35155cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x351560: 0x8cc50018  lw          $a1, 0x18($a2)
    ctx->pc = 0x351560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x351564: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x351564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x351568: 0x10a0002e  beqz        $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x351568u;
    {
        const bool branch_taken_0x351568 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x35156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351568u;
        // 0x35156c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351568) {
            ctx->pc = 0x351624u;
            goto label_351624;
        }
    }
    ctx->pc = 0x351570u;
    // 0x351570: 0x1957018  mult        $t6, $t4, $s5
    ctx->pc = 0x351570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x351574: 0x240682d  daddu       $t5, $s2, $zero
    ctx->pc = 0x351574u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351578: 0x262a0100  addiu       $t2, $s1, 0x100
    ctx->pc = 0x351578u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x35157c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x35157cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351580: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x351580u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351584: 0x0  nop
    ctx->pc = 0x351584u;
    // NOP
label_351588:
    // 0x351588: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x351588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x35158c: 0x8c470024  lw          $a3, 0x24($v0)
    ctx->pc = 0x35158cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x351590: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x351590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x351594: 0x6e1021  addu        $v0, $v1, $t6
    ctx->pc = 0x351594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x351598: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x351598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x35159c: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x35159cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x3515a0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x3515a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x3515a4: 0xad300044  sw          $s0, 0x44($t1)
    ctx->pc = 0x3515a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 68), GPR_U32(ctx, 16));
    // 0x3515a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3515a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3515ac: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3515ACu;
    {
        const bool branch_taken_0x3515ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3515ac) {
            ctx->pc = 0x3515B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3515ACu;
            // 0x3515b0: 0x8e2300fc  lw          $v1, 0xFC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3515D0u;
            goto label_3515d0;
        }
    }
    ctx->pc = 0x3515B4u;
    // 0x3515b4: 0x8e2200fc  lw          $v0, 0xFC($s1)
    ctx->pc = 0x3515b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x3515b8: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x3515b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3515bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3515bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3515c0: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x3515c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x3515c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3515c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3515c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3515C8u;
    {
        const bool branch_taken_0x3515c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3515CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3515C8u;
        // 0x3515cc: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3515c8) {
            ctx->pc = 0x3515ECu;
            goto label_3515ec;
        }
    }
    ctx->pc = 0x3515D0u;
label_3515d0:
    // 0x3515d0: 0x8e250124  lw          $a1, 0x124($s1)
    ctx->pc = 0x3515d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x3515d4: 0x682021  addu        $a0, $v1, $t0
    ctx->pc = 0x3515d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3515d8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3515d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3515dc: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x3515dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3515e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3515e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3515e4: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x3515e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3515e8: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x3515e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3515ec:
    // 0x3515ec: 0x24e2fffd  addiu       $v0, $a3, -0x3
    ctx->pc = 0x3515ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967293));
    // 0x3515f0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3515f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3515f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3515F4u;
    {
        const bool branch_taken_0x3515f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3515F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3515F4u;
        // 0x3515f8: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3515f4) {
            ctx->pc = 0x35160Cu;
            goto label_35160c;
        }
    }
    ctx->pc = 0x3515FCu;
    // 0x3515fc: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x3515fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x351600: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x351600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x351604: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x351604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x351608: 0x83800a  movz        $s0, $a0, $v1
    ctx->pc = 0x351608u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_35160c:
    // 0x35160c: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x35160cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x351610: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x351610u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x351614: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x351614u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x351618: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x351618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35161c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x35161Cu;
    {
        const bool branch_taken_0x35161c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x351620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35161Cu;
        // 0x351620: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35161c) {
            ctx->pc = 0x351588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351588;
        }
    }
    ctx->pc = 0x351624u;
label_351624:
    // 0x351624: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x351624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351628: 0xc0d446c  jal         func_3511B0
    ctx->pc = 0x351628u;
    SET_GPR_U32(ctx, 31, 0x351630u);
    ctx->pc = 0x35162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351628u;
    // 0x35162c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3511B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3511B0u, 0x351628u, 0x351630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351630u;
label_351630:
    // 0x351630: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x351630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x351634: 0x280602d  daddu       $t4, $s4, $zero
    ctx->pc = 0x351634u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351638: 0x4c102b  sltu        $v0, $v0, $t4
    ctx->pc = 0x351638u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x35163c: 0x1040ffb0  beqz        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x35163Cu;
    {
        const bool branch_taken_0x35163c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35163Cu;
        // 0x351640: 0xc2140  sll         $a0, $t4, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35163c) {
            ctx->pc = 0x351500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351500;
        }
    }
    ctx->pc = 0x351644u;
    // 0x351644: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x351644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x351648: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x351648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x35164c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x35164cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x351650: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x351650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x351654: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x351654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x351658: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x351658u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x35165c: 0x8e480014  lw          $t0, 0x14($s2)
    ctx->pc = 0x35165cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x351660: 0x8e490018  lw          $t1, 0x18($s2)
    ctx->pc = 0x351660u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x351664: 0x8e4a001c  lw          $t2, 0x1C($s2)
    ctx->pc = 0x351664u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x351668: 0xae620040  sw          $v0, 0x40($s3)
    ctx->pc = 0x351668u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
    // 0x35166c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x35166cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x351670: 0xae640008  sw          $a0, 0x8($s3)
    ctx->pc = 0x351670u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 4));
    // 0x351674: 0xae650010  sw          $a1, 0x10($s3)
    ctx->pc = 0x351674u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 5));
    // 0x351678: 0xae660018  sw          $a2, 0x18($s3)
    ctx->pc = 0x351678u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 6));
    // 0x35167c: 0xae670020  sw          $a3, 0x20($s3)
    ctx->pc = 0x35167cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 7));
    // 0x351680: 0xae680028  sw          $t0, 0x28($s3)
    ctx->pc = 0x351680u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 8));
    // 0x351684: 0xae690030  sw          $t1, 0x30($s3)
    ctx->pc = 0x351684u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 9));
    // 0x351688: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x351688u;
    {
        const bool branch_taken_0x351688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351688u;
        // 0x35168c: 0xae6a0038  sw          $t2, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351688) {
            ctx->pc = 0x3518BCu;
            goto label_3518bc;
        }
    }
    ctx->pc = 0x351690u;
label_351690:
    // 0x351690: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x351690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x351694: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x351694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x351698: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x351698u;
    {
        const bool branch_taken_0x351698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351698u;
        // 0x35169c: 0x30e20001  andi        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x351698) {
            ctx->pc = 0x351758u;
            goto label_351758;
        }
    }
    ctx->pc = 0x3516A0u;
    // 0x3516a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3516A0u;
    {
        const bool branch_taken_0x3516a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3516A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3516A0u;
        // 0x3516a4: 0x30e20008  andi        $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3516a0) {
            ctx->pc = 0x3516B0u;
            goto label_3516b0;
        }
    }
    ctx->pc = 0x3516A8u;
    // 0x3516a8: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x3516a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x3516ac: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3516acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3516b0:
    // 0x3516b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3516B0u;
    {
        const bool branch_taken_0x3516b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3516B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3516B0u;
        // 0x3516b4: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3516b0) {
            ctx->pc = 0x3516C4u;
            goto label_3516c4;
        }
    }
    ctx->pc = 0x3516B8u;
    // 0x3516b8: 0xacd0000c  sw          $s0, 0xC($a2)
    ctx->pc = 0x3516b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 16));
    // 0x3516bc: 0x8c62b954  lw          $v0, -0x46AC($v1)
    ctx->pc = 0x3516bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949204)));
    // 0x3516c0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3516c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3516c4:
    // 0x3516c4: 0x30e20010  andi        $v0, $a3, 0x10
    ctx->pc = 0x3516c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x3516c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3516C8u;
    {
        const bool branch_taken_0x3516c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3516CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3516C8u;
        // 0x3516cc: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3516c8) {
            ctx->pc = 0x3516DCu;
            goto label_3516dc;
        }
    }
    ctx->pc = 0x3516D0u;
    // 0x3516d0: 0xacd00014  sw          $s0, 0x14($a2)
    ctx->pc = 0x3516d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 16));
    // 0x3516d4: 0x8c62b958  lw          $v0, -0x46A8($v1)
    ctx->pc = 0x3516d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949208)));
    // 0x3516d8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3516d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3516dc:
    // 0x3516dc: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x3516dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x3516e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3516E0u;
    {
        const bool branch_taken_0x3516e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3516E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3516E0u;
        // 0x3516e4: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3516e0) {
            ctx->pc = 0x3516F4u;
            goto label_3516f4;
        }
    }
    ctx->pc = 0x3516E8u;
    // 0x3516e8: 0xacd0001c  sw          $s0, 0x1C($a2)
    ctx->pc = 0x3516e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 16));
    // 0x3516ec: 0x8c62b95c  lw          $v0, -0x46A4($v1)
    ctx->pc = 0x3516ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949212)));
    // 0x3516f0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3516f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3516f4:
    // 0x3516f4: 0x30e20002  andi        $v0, $a3, 0x2
    ctx->pc = 0x3516f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x3516f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3516F8u;
    {
        const bool branch_taken_0x3516f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3516FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3516F8u;
        // 0x3516fc: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3516f8) {
            ctx->pc = 0x35170Cu;
            goto label_35170c;
        }
    }
    ctx->pc = 0x351700u;
    // 0x351700: 0xacd00024  sw          $s0, 0x24($a2)
    ctx->pc = 0x351700u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 16));
    // 0x351704: 0x8c62b960  lw          $v0, -0x46A0($v1)
    ctx->pc = 0x351704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949216)));
    // 0x351708: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x351708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_35170c:
    // 0x35170c: 0x30e20040  andi        $v0, $a3, 0x40
    ctx->pc = 0x35170cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
    // 0x351710: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x351710u;
    {
        const bool branch_taken_0x351710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351710u;
        // 0x351714: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351710) {
            ctx->pc = 0x351724u;
            goto label_351724;
        }
    }
    ctx->pc = 0x351718u;
    // 0x351718: 0xacd0002c  sw          $s0, 0x2C($a2)
    ctx->pc = 0x351718u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 16));
    // 0x35171c: 0x8c62b964  lw          $v0, -0x469C($v1)
    ctx->pc = 0x35171cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949220)));
    // 0x351720: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x351720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_351724:
    // 0x351724: 0x30e20020  andi        $v0, $a3, 0x20
    ctx->pc = 0x351724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x351728: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x351728u;
    {
        const bool branch_taken_0x351728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351728u;
        // 0x35172c: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351728) {
            ctx->pc = 0x35173Cu;
            goto label_35173c;
        }
    }
    ctx->pc = 0x351730u;
    // 0x351730: 0xacd00034  sw          $s0, 0x34($a2)
    ctx->pc = 0x351730u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 16));
    // 0x351734: 0x8c62b968  lw          $v0, -0x4698($v1)
    ctx->pc = 0x351734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949224)));
    // 0x351738: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x351738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_35173c:
    // 0x35173c: 0x30e20080  andi        $v0, $a3, 0x80
    ctx->pc = 0x35173cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x351740: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x351740u;
    {
        const bool branch_taken_0x351740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351740u;
        // 0x351744: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351740) {
            ctx->pc = 0x3518B0u;
            goto label_3518b0;
        }
    }
    ctx->pc = 0x351748u;
    // 0x351748: 0xacd0003c  sw          $s0, 0x3C($a2)
    ctx->pc = 0x351748u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 16));
    // 0x35174c: 0x8c62b96c  lw          $v0, -0x4694($v1)
    ctx->pc = 0x35174cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949228)));
    // 0x351750: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x351750u;
    {
        const bool branch_taken_0x351750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351750u;
        // 0x351754: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351750) {
            ctx->pc = 0x3518B0u;
            goto label_3518b0;
        }
    }
    ctx->pc = 0x351758u;
label_351758:
    // 0x351758: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x351758u;
    {
        const bool branch_taken_0x351758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351758u;
        // 0x35175c: 0x8c680000  lw          $t0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351758) {
            ctx->pc = 0x35177Cu;
            goto label_35177c;
        }
    }
    ctx->pc = 0x351760u;
    // 0x351760: 0x2604000f  addiu       $a0, $s0, 0xF
    ctx->pc = 0x351760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x351764: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x351764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x351768: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x351768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x35176c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35176cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x351770: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x351770u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x351774: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x351774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x351778: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x351778u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_35177c:
    // 0x35177c: 0x30e20008  andi        $v0, $a3, 0x8
    ctx->pc = 0x35177cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x351780: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x351780u;
    {
        const bool branch_taken_0x351780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351780u;
        // 0x351784: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351780) {
            ctx->pc = 0x3517A8u;
            goto label_3517a8;
        }
    }
    ctx->pc = 0x351788u;
    // 0x351788: 0x2605000f  addiu       $a1, $s0, 0xF
    ctx->pc = 0x351788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x35178c: 0x8c82b954  lw          $v0, -0x46AC($a0)
    ctx->pc = 0x35178cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949204)));
    // 0x351790: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x351790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x351794: 0xacd0000c  sw          $s0, 0xC($a2)
    ctx->pc = 0x351794u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 16));
    // 0x351798: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x351798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x35179c: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x35179cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3517a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3517a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3517a4: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x3517a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3517a8:
    // 0x3517a8: 0x30e20010  andi        $v0, $a3, 0x10
    ctx->pc = 0x3517a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x3517ac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3517ACu;
    {
        const bool branch_taken_0x3517ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3517B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3517ACu;
        // 0x3517b0: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3517ac) {
            ctx->pc = 0x3517D4u;
            goto label_3517d4;
        }
    }
    ctx->pc = 0x3517B4u;
    // 0x3517b4: 0x2605000f  addiu       $a1, $s0, 0xF
    ctx->pc = 0x3517b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x3517b8: 0x8c82b958  lw          $v0, -0x46A8($a0)
    ctx->pc = 0x3517b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949208)));
    // 0x3517bc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3517bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3517c0: 0xacd00014  sw          $s0, 0x14($a2)
    ctx->pc = 0x3517c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 16));
    // 0x3517c4: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x3517c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x3517c8: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x3517c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3517cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3517ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3517d0: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x3517d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3517d4:
    // 0x3517d4: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x3517d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x3517d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3517D8u;
    {
        const bool branch_taken_0x3517d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3517DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3517D8u;
        // 0x3517dc: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3517d8) {
            ctx->pc = 0x351800u;
            goto label_351800;
        }
    }
    ctx->pc = 0x3517E0u;
    // 0x3517e0: 0x2605004f  addiu       $a1, $s0, 0x4F
    ctx->pc = 0x3517e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 79));
    // 0x3517e4: 0x8c82b95c  lw          $v0, -0x46A4($a0)
    ctx->pc = 0x3517e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949212)));
    // 0x3517e8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3517e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3517ec: 0xacd0001c  sw          $s0, 0x1C($a2)
    ctx->pc = 0x3517ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 16));
    // 0x3517f0: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x3517f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x3517f4: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x3517f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3517f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3517f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3517fc: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x3517fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_351800:
    // 0x351800: 0x30e20002  andi        $v0, $a3, 0x2
    ctx->pc = 0x351800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x351804: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x351804u;
    {
        const bool branch_taken_0x351804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351804u;
        // 0x351808: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351804) {
            ctx->pc = 0x35182Cu;
            goto label_35182c;
        }
    }
    ctx->pc = 0x35180Cu;
    // 0x35180c: 0x2605004f  addiu       $a1, $s0, 0x4F
    ctx->pc = 0x35180cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 79));
    // 0x351810: 0x8c82b960  lw          $v0, -0x46A0($a0)
    ctx->pc = 0x351810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949216)));
    // 0x351814: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x351814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x351818: 0xacd00024  sw          $s0, 0x24($a2)
    ctx->pc = 0x351818u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 16));
    // 0x35181c: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x35181cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x351820: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x351820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x351824: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x351824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x351828: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x351828u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_35182c:
    // 0x35182c: 0x30e20040  andi        $v0, $a3, 0x40
    ctx->pc = 0x35182cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
    // 0x351830: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x351830u;
    {
        const bool branch_taken_0x351830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351830u;
        // 0x351834: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351830) {
            ctx->pc = 0x351858u;
            goto label_351858;
        }
    }
    ctx->pc = 0x351838u;
    // 0x351838: 0x2605000f  addiu       $a1, $s0, 0xF
    ctx->pc = 0x351838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x35183c: 0x8c82b964  lw          $v0, -0x469C($a0)
    ctx->pc = 0x35183cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949220)));
    // 0x351840: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x351840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x351844: 0xacd0002c  sw          $s0, 0x2C($a2)
    ctx->pc = 0x351844u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 16));
    // 0x351848: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x351848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x35184c: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x35184cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x351850: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x351850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x351854: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x351854u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_351858:
    // 0x351858: 0x30e20020  andi        $v0, $a3, 0x20
    ctx->pc = 0x351858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x35185c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35185Cu;
    {
        const bool branch_taken_0x35185c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35185Cu;
        // 0x351860: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35185c) {
            ctx->pc = 0x351884u;
            goto label_351884;
        }
    }
    ctx->pc = 0x351864u;
    // 0x351864: 0x2605000f  addiu       $a1, $s0, 0xF
    ctx->pc = 0x351864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x351868: 0x8c82b968  lw          $v0, -0x4698($a0)
    ctx->pc = 0x351868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949224)));
    // 0x35186c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x35186cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x351870: 0xacd00034  sw          $s0, 0x34($a2)
    ctx->pc = 0x351870u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 16));
    // 0x351874: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x351874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x351878: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x351878u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x35187c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x35187cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x351880: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x351880u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_351884:
    // 0x351884: 0x30e20080  andi        $v0, $a3, 0x80
    ctx->pc = 0x351884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x351888: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x351888u;
    {
        const bool branch_taken_0x351888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351888u;
        // 0x35188c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351888) {
            ctx->pc = 0x3518B0u;
            goto label_3518b0;
        }
    }
    ctx->pc = 0x351890u;
    // 0x351890: 0x2605000f  addiu       $a1, $s0, 0xF
    ctx->pc = 0x351890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x351894: 0x8c82b96c  lw          $v0, -0x4694($a0)
    ctx->pc = 0x351894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949228)));
    // 0x351898: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x351898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x35189c: 0xacd0003c  sw          $s0, 0x3C($a2)
    ctx->pc = 0x35189cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 16));
    // 0x3518a0: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x3518a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x3518a4: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x3518a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3518a8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3518a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3518ac: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x3518acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3518b0:
    // 0x3518b0: 0x30e20100  andi        $v0, $a3, 0x100
    ctx->pc = 0x3518b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
    // 0x3518b4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3518B4u;
    {
        const bool branch_taken_0x3518b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3518b4) {
            ctx->pc = 0x3518B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3518B4u;
            // 0x3518b8: 0xacd00044  sw          $s0, 0x44($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3518BCu;
            goto label_3518bc;
        }
    }
    ctx->pc = 0x3518BCu;
label_3518bc:
    // 0x3518bc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3518bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3518c0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3518c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3518c4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3518c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3518c8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3518c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3518cc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3518ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3518d0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3518d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3518d4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3518d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3518d8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3518d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3518dc: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3518dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3518e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3518e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3518e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3518E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3518E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3518E4u;
        // 0x3518e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3518E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3518ECu;
    // 0x3518ec: 0x0  nop
    ctx->pc = 0x3518ecu;
    // NOP
    ctx->pc = 0x3518f0u;
}
