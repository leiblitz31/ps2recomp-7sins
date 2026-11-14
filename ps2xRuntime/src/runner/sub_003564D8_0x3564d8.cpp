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

// Function: sub_003564D8
// Address: 0x3564d8 - 0x3565d8
void sub_003564D8_0x3564d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003564D8_0x3564d8");
#endif

    switch (ctx->pc) {
        case 0x356514u: goto label_356514;
        case 0x35651cu: goto label_35651c;
        default: break;
    }

    ctx->pc = 0x3564d8u;

    // 0x3564d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3564d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3564dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3564dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3564e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3564e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3564e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3564e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3564e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3564e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3564ec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3564ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3564f0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3564f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3564f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3564f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3564f8: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x3564f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x3564fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3564fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x356500: 0x8cd2004c  lw          $s2, 0x4C($a2)
    ctx->pc = 0x356500u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x356504: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x356504u;
    {
        const bool branch_taken_0x356504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x356508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356504u;
        // 0x356508: 0x8e5300e4  lw          $s3, 0xE4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356504) {
            ctx->pc = 0x356514u;
            goto label_356514;
        }
    }
    ctx->pc = 0x35650Cu;
    // 0x35650c: 0xc0d4426  jal         func_351098
    ctx->pc = 0x35650Cu;
    SET_GPR_U32(ctx, 31, 0x356514u);
    ctx->pc = 0x356510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35650Cu;
    // 0x356510: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351098u, 0x35650Cu, 0x356514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356514u;
label_356514:
    // 0x356514: 0xc10a450  jal         func_429140
    ctx->pc = 0x356514u;
    SET_GPR_U32(ctx, 31, 0x35651Cu);
    ctx->pc = 0x429140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429140u, 0x356514u, 0x35651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35651Cu;
label_35651c:
    // 0x35651c: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x35651cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x356520: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x356520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x356524: 0x2634818  mult        $t1, $s3, $v1
    ctx->pc = 0x356524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x356528: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x356528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x35652c: 0x32264004  andi        $a2, $s1, 0x4004
    ctx->pc = 0x35652cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16388);
    // 0x356530: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x356530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x356534: 0x32252002  andi        $a1, $s1, 0x2002
    ctx->pc = 0x356534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8194);
    // 0x356538: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x356538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35653c: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x35653cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x356540: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x356540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x356544: 0x2491821  addu        $v1, $s2, $t1
    ctx->pc = 0x356544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x356548: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x356548u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x35654c: 0x8c670140  lw          $a3, 0x140($v1)
    ctx->pc = 0x35654cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x356550: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x356550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356554: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x356554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x356558: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x356558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x35655c: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x35655cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x356560: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x356560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x356564: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x356564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x356568: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x356568u;
    {
        const bool branch_taken_0x356568 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x35656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356568u;
        // 0x35656c: 0xae080014  sw          $t0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356568) {
            ctx->pc = 0x356584u;
            goto label_356584;
        }
    }
    ctx->pc = 0x356570u;
    // 0x356570: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x356570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356574: 0x8c440150  lw          $a0, 0x150($v0)
    ctx->pc = 0x356574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x356578: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x356578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35657c: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x35657cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x356580: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x356580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
label_356584:
    // 0x356584: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x356584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x356588: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x356588u;
    {
        const bool branch_taken_0x356588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356588u;
        // 0x35658c: 0x2491821  addu        $v1, $s2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356588) {
            ctx->pc = 0x35659Cu;
            goto label_35659c;
        }
    }
    ctx->pc = 0x356590u;
    // 0x356590: 0xae08001c  sw          $t0, 0x1C($s0)
    ctx->pc = 0x356590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 8));
    // 0x356594: 0x8c62015c  lw          $v0, 0x15C($v1)
    ctx->pc = 0x356594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 348)));
    // 0x356598: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x356598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_35659c:
    // 0x35659c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x35659cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3565a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3565A0u;
    {
        const bool branch_taken_0x3565a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3565A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3565A0u;
        // 0x3565a4: 0x2491021  addu        $v0, $s2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3565a0) {
            ctx->pc = 0x3565B8u;
            goto label_3565b8;
        }
    }
    ctx->pc = 0x3565A8u;
    // 0x3565a8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3565a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3565ac: 0x8c44014c  lw          $a0, 0x14C($v0)
    ctx->pc = 0x3565acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
    // 0x3565b0: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x3565b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x3565b4: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x3565b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
label_3565b8:
    // 0x3565b8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3565b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3565bc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3565bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3565c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3565c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3565c4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3565c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3565c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3565c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3565cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3565CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3565D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3565CCu;
        // 0x3565d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3565CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3565D4u;
    // 0x3565d4: 0x0  nop
    ctx->pc = 0x3565d4u;
    // NOP
    ctx->pc = 0x3565d8u;
}
