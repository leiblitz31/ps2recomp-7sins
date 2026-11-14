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

// Function: sub_003098B0
// Address: 0x3098b0 - 0x309da8
void sub_003098B0_0x3098b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003098B0_0x3098b0");
#endif

    switch (ctx->pc) {
        case 0x3098f8u: goto label_3098f8;
        case 0x309924u: goto label_309924;
        case 0x309938u: goto label_309938;
        case 0x309964u: goto label_309964;
        case 0x30998cu: goto label_30998c;
        case 0x309994u: goto label_309994;
        case 0x3099a4u: goto label_3099a4;
        case 0x3099e0u: goto label_3099e0;
        case 0x309a50u: goto label_309a50;
        case 0x309a94u: goto label_309a94;
        case 0x309a9cu: goto label_309a9c;
        case 0x309ad0u: goto label_309ad0;
        case 0x309af4u: goto label_309af4;
        case 0x309b20u: goto label_309b20;
        case 0x309b38u: goto label_309b38;
        case 0x309b5cu: goto label_309b5c;
        case 0x309b78u: goto label_309b78;
        case 0x309bbcu: goto label_309bbc;
        case 0x309bf0u: goto label_309bf0;
        case 0x309c18u: goto label_309c18;
        case 0x309c3cu: goto label_309c3c;
        case 0x309c64u: goto label_309c64;
        case 0x309c74u: goto label_309c74;
        case 0x309c98u: goto label_309c98;
        case 0x309d0cu: goto label_309d0c;
        case 0x309d30u: goto label_309d30;
        case 0x309d50u: goto label_309d50;
        default: break;
    }

    ctx->pc = 0x3098b0u;

    // 0x3098b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3098b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3098b4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x3098b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x3098b8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x3098b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x3098bc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3098bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3098c0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3098c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3098c4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3098c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3098c8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3098c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3098cc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3098ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3098d0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3098d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3098d4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3098d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3098d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3098d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3098dc: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x3098DCu;
    {
        const bool branch_taken_0x3098dc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3098E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3098DCu;
        // 0x3098e0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3098dc) {
            ctx->pc = 0x3098F0u;
            goto label_3098f0;
        }
    }
    ctx->pc = 0x3098E4u;
    // 0x3098e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3098e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3098e8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3098E8u;
    {
        const bool branch_taken_0x3098e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3098ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3098E8u;
        // 0x3098ec: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3098e8) {
            ctx->pc = 0x3099B4u;
            goto label_3099b4;
        }
    }
    ctx->pc = 0x3098F0u;
label_3098f0:
    // 0x3098f0: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x3098F0u;
    SET_GPR_U32(ctx, 31, 0x3098F8u);
    ctx->pc = 0x3098F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3098F0u;
    // 0x3098f4: 0x3c120061  lui         $s2, 0x61 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)97 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x3098F0u, 0x3098F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3098F8u;
label_3098f8:
    // 0x3098f8: 0x8e506600  lw          $s0, 0x6600($s2)
    ctx->pc = 0x3098f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 26112)));
    // 0x3098fc: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3098FCu;
    {
        const bool branch_taken_0x3098fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x309900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3098FCu;
        // 0x309900: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3098fc) {
            ctx->pc = 0x30990Cu;
            goto label_30990c;
        }
    }
    ctx->pc = 0x309904u;
    // 0x309904: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x309904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309908: 0xae426600  sw          $v0, 0x6600($s2)
    ctx->pc = 0x309908u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 26112), GPR_U32(ctx, 2));
label_30990c:
    // 0x30990c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30990Cu;
    {
        const bool branch_taken_0x30990c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x30990c) {
            ctx->pc = 0x309930u;
            goto label_309930;
        }
    }
    ctx->pc = 0x309914u;
    // 0x309914: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x309914u;
    {
        const bool branch_taken_0x309914 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x309914) {
            ctx->pc = 0x309924u;
            goto label_309924;
        }
    }
    ctx->pc = 0x30991Cu;
    // 0x30991c: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x30991Cu;
    SET_GPR_U32(ctx, 31, 0x309924u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x30991Cu, 0x309924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309924u;
label_309924:
    // 0x309924: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x309924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x309928: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x309928u;
    {
        const bool branch_taken_0x309928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309928u;
        // 0x30992c: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309928) {
            ctx->pc = 0x3099B4u;
            goto label_3099b4;
        }
    }
    ctx->pc = 0x309930u;
label_309930:
    // 0x309930: 0xc0c23ae  jal         func_308EB8
    ctx->pc = 0x309930u;
    SET_GPR_U32(ctx, 31, 0x309938u);
    ctx->pc = 0x308EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308EB8u, 0x309930u, 0x309938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309938u;
label_309938:
    // 0x309938: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x309938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30993c: 0x623000b  bgezl       $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x30993Cu;
    {
        const bool branch_taken_0x30993c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x30993c) {
            ctx->pc = 0x309940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30993Cu;
            // 0x309940: 0xae140008  sw          $s4, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30996Cu;
            goto label_30996c;
        }
    }
    ctx->pc = 0x309944u;
    // 0x309944: 0x8e426600  lw          $v0, 0x6600($s2)
    ctx->pc = 0x309944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 26112)));
    // 0x309948: 0xae506600  sw          $s0, 0x6600($s2)
    ctx->pc = 0x309948u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 26112), GPR_U32(ctx, 16));
    // 0x30994c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x30994cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x309950: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x309950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x309954: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x309954u;
    {
        const bool branch_taken_0x309954 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x309958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309954u;
        // 0x309958: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309954) {
            ctx->pc = 0x3099B4u;
            goto label_3099b4;
        }
    }
    ctx->pc = 0x30995Cu;
    // 0x30995c: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x30995Cu;
    SET_GPR_U32(ctx, 31, 0x309964u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x30995Cu, 0x309964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309964u;
label_309964:
    // 0x309964: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x309964u;
    {
        const bool branch_taken_0x309964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309964u;
        // 0x309968: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309964) {
            ctx->pc = 0x3099B4u;
            goto label_3099b4;
        }
    }
    ctx->pc = 0x30996Cu;
label_30996c:
    // 0x30996c: 0x3c060031  lui         $a2, 0x31
    ctx->pc = 0x30996cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
    // 0x309970: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x309970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    // 0x309974: 0x24c69850  addiu       $a2, $a2, -0x67B0
    ctx->pc = 0x309974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940752));
    // 0x309978: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x309978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x30997c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x30997cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x309980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309984: 0xc0c2576  jal         func_3095D8
    ctx->pc = 0x309984u;
    SET_GPR_U32(ctx, 31, 0x30998Cu);
    ctx->pc = 0x309988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309984u;
    // 0x309988: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3095D8u, 0x309984u, 0x30998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30998Cu;
label_30998c:
    // 0x30998c: 0xc0c2454  jal         func_309150
    ctx->pc = 0x30998Cu;
    SET_GPR_U32(ctx, 31, 0x309994u);
    ctx->pc = 0x309990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30998Cu;
    // 0x309990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309150u, 0x30998Cu, 0x309994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309994u;
label_309994:
    // 0x309994: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x309994u;
    {
        const bool branch_taken_0x309994 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x309998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309994u;
        // 0x309998: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309994) {
            ctx->pc = 0x3099A8u;
            goto label_3099a8;
        }
    }
    ctx->pc = 0x30999Cu;
    // 0x30999c: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x30999Cu;
    SET_GPR_U32(ctx, 31, 0x3099A4u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x30999Cu, 0x3099A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3099A4u;
label_3099a4:
    // 0x3099a4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x3099a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_3099a8:
    // 0x3099a8: 0x322300fe  andi        $v1, $s1, 0xFE
    ctx->pc = 0x3099a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)254);
    // 0x3099ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3099acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3099b0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3099b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3099b4:
    // 0x3099b4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3099b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3099b8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x3099b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3099bc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x3099bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3099c0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3099c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3099c4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3099c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3099c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3099c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3099cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3099ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3099d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3099d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3099d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3099D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3099D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3099D4u;
        // 0x3099d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3099D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3099DCu;
    // 0x3099dc: 0x0  nop
    ctx->pc = 0x3099dcu;
    // NOP
label_3099e0:
    // 0x3099e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3099e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3099e4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x3099e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x3099e8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3099e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3099ec: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3099ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3099f0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3099f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3099f4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3099f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3099f8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3099f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3099fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3099fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309a00: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x309a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x309a04: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x309a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x309a08: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x309A08u;
    {
        const bool branch_taken_0x309a08 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x309A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309A08u;
        // 0x309a0c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309a08) {
            ctx->pc = 0x309A1Cu;
            goto label_309a1c;
        }
    }
    ctx->pc = 0x309A10u;
    // 0x309a10: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x309a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x309a14: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x309A14u;
    {
        const bool branch_taken_0x309a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309A14u;
        // 0x309a18: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309a14) {
            ctx->pc = 0x309AACu;
            goto label_309aac;
        }
    }
    ctx->pc = 0x309A1Cu;
label_309a1c:
    // 0x309a1c: 0x3c120061  lui         $s2, 0x61
    ctx->pc = 0x309a1cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)97 << 16));
    // 0x309a20: 0x8e506600  lw          $s0, 0x6600($s2)
    ctx->pc = 0x309a20u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x616600u));
    // 0x309a24: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x309A24u;
    {
        const bool branch_taken_0x309a24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x309a24) {
            ctx->pc = 0x309A34u;
            goto label_309a34;
        }
    }
    ctx->pc = 0x309A2Cu;
    // 0x309a2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x309a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309a30: 0xae426600  sw          $v0, 0x6600($s2)
    ctx->pc = 0x309a30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 26112), GPR_U32(ctx, 2));
label_309a34:
    // 0x309a34: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x309A34u;
    {
        const bool branch_taken_0x309a34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x309a34) {
            ctx->pc = 0x309A48u;
            goto label_309a48;
        }
    }
    ctx->pc = 0x309A3Cu;
    // 0x309a3c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x309a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x309a40: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x309A40u;
    {
        const bool branch_taken_0x309a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309A40u;
        // 0x309a44: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309a40) {
            ctx->pc = 0x309AACu;
            goto label_309aac;
        }
    }
    ctx->pc = 0x309A48u;
label_309a48:
    // 0x309a48: 0xc0c2392  jal         func_308E48
    ctx->pc = 0x309A48u;
    SET_GPR_U32(ctx, 31, 0x309A50u);
    ctx->pc = 0x308E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308E48u, 0x309A48u, 0x309A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309A50u;
label_309a50:
    // 0x309a50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x309a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309a54: 0x6230007  bgezl       $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x309A54u;
    {
        const bool branch_taken_0x309a54 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x309a54) {
            ctx->pc = 0x309A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309A54u;
            // 0x309a58: 0xae130008  sw          $s3, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309A74u;
            goto label_309a74;
        }
    }
    ctx->pc = 0x309A5Cu;
    // 0x309a5c: 0x8e436600  lw          $v1, 0x6600($s2)
    ctx->pc = 0x309a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 26112)));
    // 0x309a60: 0xae506600  sw          $s0, 0x6600($s2)
    ctx->pc = 0x309a60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 26112), GPR_U32(ctx, 16));
    // 0x309a64: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x309a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x309a68: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x309a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x309a6c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x309A6Cu;
    {
        const bool branch_taken_0x309a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309A6Cu;
        // 0x309a70: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309a6c) {
            ctx->pc = 0x309AB0u;
            goto label_309ab0;
        }
    }
    ctx->pc = 0x309A74u;
label_309a74:
    // 0x309a74: 0x3c060031  lui         $a2, 0x31
    ctx->pc = 0x309a74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
    // 0x309a78: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x309a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x309a7c: 0x24c69850  addiu       $a2, $a2, -0x67B0
    ctx->pc = 0x309a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940752));
    // 0x309a80: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x309a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x309a84: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x309a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309a88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x309a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309a8c: 0xc0c2538  jal         func_3094E0
    ctx->pc = 0x309A8Cu;
    SET_GPR_U32(ctx, 31, 0x309A94u);
    ctx->pc = 0x309A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309A8Cu;
    // 0x309a90: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3094E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3094E0u, 0x309A8Cu, 0x309A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309A94u;
label_309a94:
    // 0x309a94: 0xc0c2428  jal         func_3090A0
    ctx->pc = 0x309A94u;
    SET_GPR_U32(ctx, 31, 0x309A9Cu);
    ctx->pc = 0x309A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309A94u;
    // 0x309a98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3090A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3090A0u, 0x309A94u, 0x309A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309A9Cu;
label_309a9c:
    // 0x309a9c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x309a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x309aa0: 0x322300fe  andi        $v1, $s1, 0xFE
    ctx->pc = 0x309aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)254);
    // 0x309aa4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x309aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x309aa8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x309aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_309aac:
    // 0x309aac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x309aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_309ab0:
    // 0x309ab0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x309ab0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x309ab4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x309ab4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x309ab8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x309ab8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x309abc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x309abcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x309ac0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x309ac0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309ac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x309ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x309AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309AC8u;
        // 0x309acc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309AD0u;
label_309ad0:
    // 0x309ad0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x309ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x309ad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x309ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x309ad8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x309ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309adc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x309adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x309ae0: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x309ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x309ae4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x309ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x309ae8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x309ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x309aec: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x309AECu;
    SET_GPR_U32(ctx, 31, 0x309AF4u);
    ctx->pc = 0x309AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309AECu;
    // 0x309af0: 0x28900  sll         $s1, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x309AECu, 0x309AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309AF4u;
label_309af4:
    // 0x309af4: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x309AF4u;
    {
        const bool branch_taken_0x309af4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x309AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309AF4u;
        // 0x309af8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309af4) {
            ctx->pc = 0x309B10u;
            goto label_309b10;
        }
    }
    ctx->pc = 0x309AFCu;
    // 0x309afc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x309afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x309b00: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x309b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x309b04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x309b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x309b08: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x309B08u;
    {
        const bool branch_taken_0x309b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x309b08) {
            ctx->pc = 0x309B2Cu;
            goto label_309b2c;
        }
    }
    ctx->pc = 0x309B10u;
label_309b10:
    // 0x309b10: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x309B10u;
    {
        const bool branch_taken_0x309b10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x309b10) {
            ctx->pc = 0x309B20u;
            goto label_309b20;
        }
    }
    ctx->pc = 0x309B18u;
    // 0x309b18: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x309B18u;
    SET_GPR_U32(ctx, 31, 0x309B20u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x309B18u, 0x309B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309B20u;
label_309b20:
    // 0x309b20: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x309b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x309b24: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x309B24u;
    {
        const bool branch_taken_0x309b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309B24u;
        // 0x309b28: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309b24) {
            ctx->pc = 0x309B60u;
            goto label_309b60;
        }
    }
    ctx->pc = 0x309B2Cu;
label_309b2c:
    // 0x309b2c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x309b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x309b30: 0xc0c23e8  jal         func_308FA0
    ctx->pc = 0x309B30u;
    SET_GPR_U32(ctx, 31, 0x309B38u);
    ctx->pc = 0x308FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308FA0u, 0x309B30u, 0x309B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309B38u;
label_309b38:
    // 0x309b38: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x309b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x309b3c: 0x8c626600  lw          $v0, 0x6600($v1)
    ctx->pc = 0x309b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x616600u));
    // 0x309b40: 0xac716600  sw          $s1, 0x6600($v1)
    ctx->pc = 0x309b40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x616600u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x616600u, _value); } while (0);
    // 0x309b44: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x309b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x309b48: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x309b48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x309b4c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x309B4Cu;
    {
        const bool branch_taken_0x309b4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x309B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309B4Cu;
        // 0x309b50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309b4c) {
            ctx->pc = 0x309B60u;
            goto label_309b60;
        }
    }
    ctx->pc = 0x309B54u;
    // 0x309b54: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x309B54u;
    SET_GPR_U32(ctx, 31, 0x309B5Cu);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x309B54u, 0x309B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309B5Cu;
label_309b5c:
    // 0x309b5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x309b5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309b60:
    // 0x309b60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x309b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x309b64: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x309b64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x309b68: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x309b68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309b6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x309b6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309b70: 0x3e00008  jr          $ra
    ctx->pc = 0x309B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309B70u;
        // 0x309b74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309B78u;
label_309b78:
    // 0x309b78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x309b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x309b7c: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x309b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x309b80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x309b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x309b84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x309b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x309b88: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x309B88u;
    {
        const bool branch_taken_0x309b88 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x309B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309B88u;
        // 0x309b8c: 0x28100  sll         $s0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309b88) {
            ctx->pc = 0x309BA4u;
            goto label_309ba4;
        }
    }
    ctx->pc = 0x309B90u;
    // 0x309b90: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x309b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x309b94: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x309b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x309b98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x309b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x309b9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x309B9Cu;
    {
        const bool branch_taken_0x309b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x309b9c) {
            ctx->pc = 0x309BB0u;
            goto label_309bb0;
        }
    }
    ctx->pc = 0x309BA4u;
label_309ba4:
    // 0x309ba4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x309ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x309ba8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x309BA8u;
    {
        const bool branch_taken_0x309ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309BA8u;
        // 0x309bac: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309ba8) {
            ctx->pc = 0x309BE0u;
            goto label_309be0;
        }
    }
    ctx->pc = 0x309BB0u;
label_309bb0:
    // 0x309bb0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x309bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x309bb4: 0xc0c23c0  jal         func_308F00
    ctx->pc = 0x309BB4u;
    SET_GPR_U32(ctx, 31, 0x309BBCu);
    ctx->pc = 0x308F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308F00u, 0x309BB4u, 0x309BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309BBCu;
label_309bbc:
    // 0x309bbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x309bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309bc0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x309BC0u;
    {
        const bool branch_taken_0x309bc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x309BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309BC0u;
        // 0x309bc4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309bc0) {
            ctx->pc = 0x309BE0u;
            goto label_309be0;
        }
    }
    ctx->pc = 0x309BC8u;
    // 0x309bc8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x309bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x309bcc: 0x8c436600  lw          $v1, 0x6600($v0)
    ctx->pc = 0x309bccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x616600u));
    // 0x309bd0: 0xac506600  sw          $s0, 0x6600($v0)
    ctx->pc = 0x309bd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x616600u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x616600u, _value); } while (0);
    // 0x309bd4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x309bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x309bd8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x309bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x309bdc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x309bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_309be0:
    // 0x309be0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x309be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309be4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x309be4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309be8: 0x3e00008  jr          $ra
    ctx->pc = 0x309BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309BE8u;
        // 0x309bec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309BF0u;
label_309bf0:
    // 0x309bf0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x309bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x309bf4: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x309bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x309bf8: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x309bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x309bfc: 0xac402248  sw          $zero, 0x2248($v0)
    ctx->pc = 0x309bfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4F2248u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4F2248u, _value); } while (0);
    // 0x309c00: 0xac60224c  sw          $zero, 0x224C($v1)
    ctx->pc = 0x309c00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4F224Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4F224Cu, _value); } while (0);
    // 0x309c04: 0x24846608  addiu       $a0, $a0, 0x6608
    ctx->pc = 0x309c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26120));
    // 0x309c08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x309c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309c0c: 0x80bb7e6  j           func_2EDF98
    ctx->pc = 0x309C0Cu;
    ctx->pc = 0x309C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309C0Cu;
    // 0x309c10: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    sub_002EDF98_0x2edf98(rdram, ctx, runtime); return;
    ctx->pc = 0x309C14u;
    // 0x309c14: 0x0  nop
    ctx->pc = 0x309c14u;
    // NOP
label_309c18:
    // 0x309c18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x309c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x309c1c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x309c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x309c20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x309c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x309c24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x309c24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309c28: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x309c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x309c2c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x309c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x309c30: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x309c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x309c34: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x309C34u;
    SET_GPR_U32(ctx, 31, 0x309C3Cu);
    ctx->pc = 0x309C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309C34u;
    // 0x309c38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x309C34u, 0x309C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309C3Cu;
label_309c3c:
    // 0x309c3c: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x309c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x309c40: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x309c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x309c44: 0x8c732248  lw          $s3, 0x2248($v1)
    ctx->pc = 0x309c44u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x4F2248u));
    // 0x309c48: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x309c48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309c4c: 0xacb1224c  sw          $s1, 0x224C($a1)
    ctx->pc = 0x309c4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x4F224Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4F224Cu, _value); } while (0);
    // 0x309c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309c54: 0xac702248  sw          $s0, 0x2248($v1)
    ctx->pc = 0x309c54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x4F2248u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4F2248u, _value); } while (0);
    // 0x309c58: 0x113100  sll         $a2, $s1, 4
    ctx->pc = 0x309c58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x309c5c: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x309C5Cu;
    SET_GPR_U32(ctx, 31, 0x309C64u);
    ctx->pc = 0x309C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309C5Cu;
    // 0x309c60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x309C5Cu, 0x309C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309C64u;
label_309c64:
    // 0x309c64: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x309C64u;
    {
        const bool branch_taken_0x309c64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x309C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309C64u;
        // 0x309c68: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309c64) {
            ctx->pc = 0x309C78u;
            goto label_309c78;
        }
    }
    ctx->pc = 0x309C6Cu;
    // 0x309c6c: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x309C6Cu;
    SET_GPR_U32(ctx, 31, 0x309C74u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x309C6Cu, 0x309C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309C74u;
label_309c74:
    // 0x309c74: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x309c74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_309c78:
    // 0x309c78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x309c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x309c7c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x309c7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x309c80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x309c80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x309c84: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x309c84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309c88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x309c88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x309C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309C8Cu;
        // 0x309c90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309C94u;
    // 0x309c94: 0x0  nop
    ctx->pc = 0x309c94u;
    // NOP
label_309c98:
    // 0x309c98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x309c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x309c9c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x309c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x309ca0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x309ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x309ca4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x309ca4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309ca8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x309ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x309cac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x309cacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309cb0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x309cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x309cb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x309cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309cb8: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x309CB8u;
    {
        const bool branch_taken_0x309cb8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x309CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309CB8u;
        // 0x309cbc: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309cb8) {
            ctx->pc = 0x309CDCu;
            goto label_309cdc;
        }
    }
    ctx->pc = 0x309CC0u;
    // 0x309cc0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x309cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x309cc4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x309cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x309cc8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x309cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x309ccc: 0x24716608  addiu       $s1, $v1, 0x6608
    ctx->pc = 0x309cccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 26120));
    // 0x309cd0: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x309cd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x309cd4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x309CD4u;
    {
        const bool branch_taken_0x309cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309CD4u;
        // 0x309cd8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309cd4) {
            ctx->pc = 0x309CECu;
            goto label_309cec;
        }
    }
    ctx->pc = 0x309CDCu;
label_309cdc:
    // 0x309cdc: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x309cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x309ce0: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x309ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x309ce4: 0x8c512248  lw          $s1, 0x2248($v0)
    ctx->pc = 0x309ce4u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x4F2248u));
    // 0x309ce8: 0x8c62224c  lw          $v0, 0x224C($v1)
    ctx->pc = 0x309ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F224Cu));
label_309cec:
    // 0x309cec: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x309cecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x309cf0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x309CF0u;
    {
        const bool branch_taken_0x309cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x309cf0) {
            ctx->pc = 0x309D04u;
            goto label_309d04;
        }
    }
    ctx->pc = 0x309CF8u;
    // 0x309cf8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x309cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x309cfc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x309CFCu;
    {
        const bool branch_taken_0x309cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309CFCu;
        // 0x309d00: 0x34420069  ori         $v0, $v0, 0x69 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)105);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309cfc) {
            ctx->pc = 0x309D34u;
            goto label_309d34;
        }
    }
    ctx->pc = 0x309D04u;
label_309d04:
    // 0x309d04: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x309D04u;
    SET_GPR_U32(ctx, 31, 0x309D0Cu);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x309D04u, 0x309D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309D0Cu;
label_309d0c:
    // 0x309d0c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x309d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x309d10: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x309d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x309d14: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x309d14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x309d18: 0xac730004  sw          $s3, 0x4($v1)
    ctx->pc = 0x309d18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
    // 0x309d1c: 0x380202d  daddu       $a0, $gp, $zero
    ctx->pc = 0x309d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309d20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x309D20u;
    {
        const bool branch_taken_0x309d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309D20u;
        // 0x309d24: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309d20) {
            ctx->pc = 0x309D30u;
            goto label_309d30;
        }
    }
    ctx->pc = 0x309D28u;
    // 0x309d28: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x309D28u;
    SET_GPR_U32(ctx, 31, 0x309D30u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x309D28u, 0x309D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309D30u;
label_309d30:
    // 0x309d30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x309d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309d34:
    // 0x309d34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x309d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x309d38: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x309d38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x309d3c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x309d3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x309d40: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x309d40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309d44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x309d44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309d48: 0x3e00008  jr          $ra
    ctx->pc = 0x309D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309D48u;
        // 0x309d4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309D50u;
label_309d50:
    // 0x309d50: 0x4830008  bgezl       $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x309D50u;
    {
        const bool branch_taken_0x309d50 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x309d50) {
            ctx->pc = 0x309D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309D50u;
            // 0x309d54: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309D74u;
            goto label_309d74;
        }
    }
    ctx->pc = 0x309D58u;
    // 0x309d58: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x309d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x309d5c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x309d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x309d60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x309d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x309d64: 0x24656608  addiu       $a1, $v1, 0x6608
    ctx->pc = 0x309d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 26120));
    // 0x309d68: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x309d68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x309d6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x309D6Cu;
    {
        const bool branch_taken_0x309d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309D6Cu;
        // 0x309d70: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309d6c) {
            ctx->pc = 0x309D80u;
            goto label_309d80;
        }
    }
    ctx->pc = 0x309D74u;
label_309d74:
    // 0x309d74: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x309d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x309d78: 0x8c452248  lw          $a1, 0x2248($v0)
    ctx->pc = 0x309d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8776)));
    // 0x309d7c: 0x8c62224c  lw          $v0, 0x224C($v1)
    ctx->pc = 0x309d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F224Cu));
label_309d80:
    // 0x309d80: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x309d80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x309d84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x309D84u;
    {
        const bool branch_taken_0x309d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309D84u;
        // 0x309d88: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309d84) {
            ctx->pc = 0x309D94u;
            goto label_309d94;
        }
    }
    ctx->pc = 0x309D8Cu;
    // 0x309d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x309D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309D8Cu;
        // 0x309d90: 0x2402ff97  addiu       $v0, $zero, -0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967191));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309D94u;
label_309d94:
    // 0x309d94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x309d94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309d98: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x309d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x309d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x309D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309D9Cu;
        // 0x309da0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309DA4u;
    // 0x309da4: 0x0  nop
    ctx->pc = 0x309da4u;
    // NOP
    ctx->pc = 0x309da8u;
}
