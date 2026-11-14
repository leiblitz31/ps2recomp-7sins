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

// Function: sub_001C04F0
// Address: 0x1c04f0 - 0x1c0650
void sub_001C04F0_0x1c04f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C04F0_0x1c04f0");
#endif

    switch (ctx->pc) {
        case 0x1c0548u: goto label_1c0548;
        case 0x1c0554u: goto label_1c0554;
        default: break;
    }

    ctx->pc = 0x1c04f0u;

    // 0x1c04f0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1c04f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1c04f4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c04f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1c04f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c04f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c04fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c04fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c0500: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c0500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c0504: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c0504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c0508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c0508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c050c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c050cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c0510: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x1c0510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x1c0514: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x1c0514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x1c0518: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x1c0518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x1c051c: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x1c051cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x1c0520: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x1c0520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x1c0524: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c0524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0528: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c0528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c052c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c052cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0530: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c0530u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0534: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c0534u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0538: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c0538u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c053c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1c053cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0540: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1C0540u;
    {
        const bool branch_taken_0x1c0540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0540) {
            ctx->pc = 0x1C05F8u;
            goto label_1c05f8;
        }
    }
    ctx->pc = 0x1C0548u;
label_1c0548:
    // 0x1c0548: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c0548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c054c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1C054Cu;
    {
        const bool branch_taken_0x1c054c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c054c) {
            ctx->pc = 0x1C05E0u;
            goto label_1c05e0;
        }
    }
    ctx->pc = 0x1C0554u;
label_1c0554:
    // 0x1c0554: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c0554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c0558: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x1c0558u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c055c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1c055cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1c0560: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1c0560u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1c0564: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1c0564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c0568: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1c0568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c056c: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x1c056cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c0570: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1c0570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1c0574: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c0574u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c0578: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1c0578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c057c: 0x8084000a  lb          $a0, 0xA($a0)
    ctx->pc = 0x1c057cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1c0580: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x1c0580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x1c0584: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1c0584u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1c0588: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0588u;
    {
        const bool branch_taken_0x1c0588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1c0588) {
            ctx->pc = 0x1C0598u;
            goto label_1c0598;
        }
    }
    ctx->pc = 0x1C0590u;
    // 0x1c0590: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1c0590u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0594: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x1c0594u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c0598:
    // 0x1c0598: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1c0598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c059c: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x1c059cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c05a0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1c05a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1c05a4: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1c05a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1c05a8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1c05a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c05ac: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1c05acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c05b0: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x1c05b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c05b4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1c05b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1c05b8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c05b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c05bc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1c05bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c05c0: 0x8084000a  lb          $a0, 0xA($a0)
    ctx->pc = 0x1c05c0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1c05c4: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x1c05c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x1c05c8: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1c05c8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1c05cc: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C05CCu;
    {
        const bool branch_taken_0x1c05cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1c05cc) {
            ctx->pc = 0x1C05DCu;
            goto label_1c05dc;
        }
    }
    ctx->pc = 0x1C05D4u;
    // 0x1c05d4: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1c05d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c05d8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1c05d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c05dc:
    // 0x1c05dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c05dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c05e0:
    // 0x1c05e0: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x1c05e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c05e4: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1C05E4u;
    {
        const bool branch_taken_0x1c05e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c05e4) {
            ctx->pc = 0x1C0554u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0554;
        }
    }
    ctx->pc = 0x1C05ECu;
    // 0x1c05ec: 0x16c00002  bnez        $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C05ECu;
    {
        const bool branch_taken_0x1c05ec = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c05ec) {
            ctx->pc = 0x1C05F8u;
            goto label_1c05f8;
        }
    }
    ctx->pc = 0x1C05F4u;
    // 0x1c05f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c05f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c05f8:
    // 0x1c05f8: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x1c05f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c05fc: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1C05FCu;
    {
        const bool branch_taken_0x1c05fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c05fc) {
            ctx->pc = 0x1C0548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0548;
        }
    }
    ctx->pc = 0x1C0604u;
    // 0x1c0604: 0x2752023  subu        $a0, $s3, $s5
    ctx->pc = 0x1c0604u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x1c0608: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1c0608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c060c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1c060cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1c0610: 0x2542023  subu        $a0, $s2, $s4
    ctx->pc = 0x1c0610u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x1c0614: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1c0614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c0618: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1c0618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1c061c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1c061cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c0620: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c0620u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c0624: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c0624u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c0628: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c0628u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c062c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c062cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0630: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c0630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0634: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c0634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0638: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1c0638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c063c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C063Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C063Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0644u;
    // 0x1c0644: 0x0  nop
    ctx->pc = 0x1c0644u;
    // NOP
    // 0x1c0648: 0x0  nop
    ctx->pc = 0x1c0648u;
    // NOP
    // 0x1c064c: 0x0  nop
    ctx->pc = 0x1c064cu;
    // NOP
    ctx->pc = 0x1c0650u;
}
