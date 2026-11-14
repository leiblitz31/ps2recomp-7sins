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

// Function: sub_00467420
// Address: 0x467420 - 0x467570
void sub_00467420_0x467420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00467420_0x467420");
#endif

    switch (ctx->pc) {
        case 0x467478u: goto label_467478;
        case 0x4674c8u: goto label_4674c8;
        case 0x467500u: goto label_467500;
        case 0x46752cu: goto label_46752c;
        default: break;
    }

    ctx->pc = 0x467420u;

    // 0x467420: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x467420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x467424: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x467424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x467428: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x467428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x46742c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x46742cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x467430: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x467430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x467434: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x467434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x467438: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x467438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x46743c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x46743cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x467440: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x467440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x467444: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x467444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x467448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x467448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46744c: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x46744cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x467450: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x467450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x467454: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x467454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467458: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x467458u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46745c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x46745cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467460: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x467460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x467464: 0x14020008  bne         $zero, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x467464u;
    {
        const bool branch_taken_0x467464 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x467464) {
            ctx->pc = 0x467488u;
            goto label_467488;
        }
    }
    ctx->pc = 0x46746Cu;
    // 0x46746c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x46746cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x467470: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x467470u;
    SET_GPR_U32(ctx, 31, 0x467478u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x467470u, 0x467478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467478u;
label_467478:
    // 0x467478: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x467478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46747c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x46747cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467480: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x467480u;
    {
        const bool branch_taken_0x467480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x467480) {
            ctx->pc = 0x467530u;
            goto label_467530;
        }
    }
    ctx->pc = 0x467488u;
label_467488:
    // 0x467488: 0x8fb200a0  lw          $s2, 0xA0($sp)
    ctx->pc = 0x467488u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x46748c: 0x8e55fffc  lw          $s5, -0x4($s2)
    ctx->pc = 0x46748cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    // 0x467490: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x467490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x467494: 0x2a21824  and         $v1, $s5, $v0
    ctx->pc = 0x467494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x467498: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x467498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x46749c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46749Cu;
    {
        const bool branch_taken_0x46749c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x46749c) {
            ctx->pc = 0x4674B0u;
            goto label_4674b0;
        }
    }
    ctx->pc = 0x4674A4u;
    // 0x4674a4: 0x15123c  dsll32      $v0, $s5, 8
    ctx->pc = 0x4674a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 8));
    // 0x4674a8: 0x2123e  dsrl32      $v0, $v0, 8
    ctx->pc = 0x4674a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 8));
    // 0x4674ac: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x4674acu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4674b0:
    // 0x4674b0: 0x8f82c03c  lw          $v0, -0x3FC4($gp)
    ctx->pc = 0x4674b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950972)));
    // 0x4674b4: 0x242b023  subu        $s6, $s2, $v0
    ctx->pc = 0x4674b4u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4674b8: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x4674b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4674bc: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x4674bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4674c0: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x4674C0u;
    SET_GPR_U32(ctx, 31, 0x4674C8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x4674C0u, 0x4674C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4674C8u;
label_4674c8:
    // 0x4674c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4674c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4674cc: 0x220f02d  daddu       $fp, $s1, $zero
    ctx->pc = 0x4674ccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4674d0: 0x8fb700a0  lw          $s7, 0xA0($sp)
    ctx->pc = 0x4674d0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4674d4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x4674d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4674d8: 0x54082b  sltu        $at, $v0, $s4
    ctx->pc = 0x4674d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x4674dc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x4674DCu;
    {
        const bool branch_taken_0x4674dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4674dc) {
            ctx->pc = 0x4674F0u;
            goto label_4674f0;
        }
    }
    ctx->pc = 0x4674E4u;
    // 0x4674e4: 0x8fb300b0  lw          $s3, 0xB0($sp)
    ctx->pc = 0x4674e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4674e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4674E8u;
    {
        const bool branch_taken_0x4674e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4674e8) {
            ctx->pc = 0x4674F4u;
            goto label_4674f4;
        }
    }
    ctx->pc = 0x4674F0u;
label_4674f0:
    // 0x4674f0: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x4674f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4674f4:
    // 0x4674f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4674f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4674f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4674F8u;
    {
        const bool branch_taken_0x4674f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4674f8) {
            ctx->pc = 0x467514u;
            goto label_467514;
        }
    }
    ctx->pc = 0x467500u;
label_467500:
    // 0x467500: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x467500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x467504: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x467504u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x467508: 0x3d01021  addu        $v0, $fp, $s0
    ctx->pc = 0x467508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x46750c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x46750cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x467510: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x467510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_467514:
    // 0x467514: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x467514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x467518: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x467518u;
    {
        const bool branch_taken_0x467518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x467518) {
            ctx->pc = 0x467500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_467500;
        }
    }
    ctx->pc = 0x467520u;
    // 0x467520: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x467520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x467524: 0xc119c5c  jal         func_467170
    ctx->pc = 0x467524u;
    SET_GPR_U32(ctx, 31, 0x46752Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x467524u, 0x46752Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46752Cu;
label_46752c:
    // 0x46752c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x46752cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_467530:
    // 0x467530: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x467530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x467534: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x467534u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x467538: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x467538u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46753c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x46753cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x467540: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x467540u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x467544: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x467544u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x467548: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x467548u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46754c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46754cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x467550: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x467550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x467554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x467558: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x467558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x46755c: 0x3e00008  jr          $ra
    ctx->pc = 0x46755Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46755Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x467564u;
    // 0x467564: 0x0  nop
    ctx->pc = 0x467564u;
    // NOP
    // 0x467568: 0x0  nop
    ctx->pc = 0x467568u;
    // NOP
    // 0x46756c: 0x0  nop
    ctx->pc = 0x46756cu;
    // NOP
    ctx->pc = 0x467570u;
}
