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

// Function: sub_001FD210
// Address: 0x1fd210 - 0x1fd3d0
void sub_001FD210_0x1fd210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD210_0x1fd210");
#endif

    switch (ctx->pc) {
        case 0x1fd254u: goto label_1fd254;
        case 0x1fd26cu: goto label_1fd26c;
        case 0x1fd284u: goto label_1fd284;
        case 0x1fd2b4u: goto label_1fd2b4;
        default: break;
    }

    ctx->pc = 0x1fd210u;

    // 0x1fd210: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1fd210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1fd214: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1fd214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1fd218: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1fd218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1fd21c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1fd21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1fd220: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fd220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1fd224: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fd224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fd228: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fd228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fd22c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fd22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fd230: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fd230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fd234: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x1fd234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x1fd238: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x1fd238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x1fd23c: 0xafa700b0  sw          $a3, 0xB0($sp)
    ctx->pc = 0x1fd23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 7));
    // 0x1fd240: 0xafa800c0  sw          $t0, 0xC0($sp)
    ctx->pc = 0x1fd240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 8));
    // 0x1fd244: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1fd244u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd248: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1fd248u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd24c: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1FD24Cu;
    SET_GPR_U32(ctx, 31, 0x1FD254u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1FD24Cu, 0x1FD254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD254u;
label_1fd254:
    // 0x1fd254: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fd254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fd258: 0x8c63bfac  lw          $v1, -0x4054($v1)
    ctx->pc = 0x1fd258u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BFACu));
    // 0x1fd25c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1fd25cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1fd260: 0x8810  mfhi        $s1
    ctx->pc = 0x1fd260u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1fd264: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1FD264u;
    SET_GPR_U32(ctx, 31, 0x1FD26Cu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1FD264u, 0x1FD26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD26Cu;
label_1fd26c:
    // 0x1fd26c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fd26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fd270: 0x8c63bfb0  lw          $v1, -0x4050($v1)
    ctx->pc = 0x1fd270u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BFB0u));
    // 0x1fd274: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1fd274u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1fd278: 0x8010  mfhi        $s0
    ctx->pc = 0x1fd278u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x1fd27c: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1FD27Cu;
    SET_GPR_U32(ctx, 31, 0x1FD284u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1FD27Cu, 0x1FD284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD284u;
label_1fd284:
    // 0x1fd284: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fd284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fd288: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fd288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fd28c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD28Cu;
    {
        const bool branch_taken_0x1fd28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd28c) {
            ctx->pc = 0x1FD2A4u;
            goto label_1fd2a4;
        }
    }
    ctx->pc = 0x1FD294u;
    // 0x1fd294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fd294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd298: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1fd298u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fd29c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD29Cu;
    {
        const bool branch_taken_0x1fd29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd29c) {
            ctx->pc = 0x1FD2A8u;
            goto label_1fd2a8;
        }
    }
    ctx->pc = 0x1FD2A4u;
label_1fd2a4:
    // 0x1fd2a4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1fd2a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd2a8:
    // 0x1fd2a8: 0x32b600ff  andi        $s6, $s5, 0xFF
    ctx->pc = 0x1fd2a8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x1fd2ac: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1FD2ACu;
    SET_GPR_U32(ctx, 31, 0x1FD2B4u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1FD2ACu, 0x1FD2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD2B4u;
label_1fd2b4:
    // 0x1fd2b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fd2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fd2b8: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1fd2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fd2bc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1fd2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fd2c0: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x1fd2c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fd2c4: 0x12c00018  beqz        $s6, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FD2C4u;
    {
        const bool branch_taken_0x1fd2c4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd2c4) {
            ctx->pc = 0x1FD328u;
            goto label_1fd328;
        }
    }
    ctx->pc = 0x1FD2CCu;
    // 0x1fd2cc: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1fd2ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd2d0: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FD2D0u;
    {
        const bool branch_taken_0x1fd2d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd2d0) {
            ctx->pc = 0x1FD2F0u;
            goto label_1fd2f0;
        }
    }
    ctx->pc = 0x1FD2D8u;
    // 0x1fd2d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fd2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fd2dc: 0x16430004  bne         $s2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD2DCu;
    {
        const bool branch_taken_0x1fd2dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fd2dc) {
            ctx->pc = 0x1FD2F0u;
            goto label_1fd2f0;
        }
    }
    ctx->pc = 0x1FD2E4u;
    // 0x1fd2e4: 0x26340001  addiu       $s4, $s1, 0x1
    ctx->pc = 0x1fd2e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fd2e8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1FD2E8u;
    {
        const bool branch_taken_0x1fd2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd2e8) {
            ctx->pc = 0x1FD37Cu;
            goto label_1fd37c;
        }
    }
    ctx->pc = 0x1FD2F0u;
label_1fd2f0:
    // 0x1fd2f0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fd2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fd2f4: 0x8c63bfac  lw          $v1, -0x4054($v1)
    ctx->pc = 0x1fd2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BFACu));
    // 0x1fd2f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fd2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fd2fc: 0x16230007  bne         $s1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FD2FCu;
    {
        const bool branch_taken_0x1fd2fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fd2fc) {
            ctx->pc = 0x1FD31Cu;
            goto label_1fd31c;
        }
    }
    ctx->pc = 0x1FD304u;
    // 0x1fd304: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fd304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd308: 0x16430004  bne         $s2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD308u;
    {
        const bool branch_taken_0x1fd308 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fd308) {
            ctx->pc = 0x1FD31Cu;
            goto label_1fd31c;
        }
    }
    ctx->pc = 0x1FD310u;
    // 0x1fd310: 0x2634ffff  addiu       $s4, $s1, -0x1
    ctx->pc = 0x1fd310u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1fd314: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1FD314u;
    {
        const bool branch_taken_0x1fd314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd314) {
            ctx->pc = 0x1FD37Cu;
            goto label_1fd37c;
        }
    }
    ctx->pc = 0x1FD31Cu;
label_1fd31c:
    // 0x1fd31c: 0x232a021  addu        $s4, $s1, $s2
    ctx->pc = 0x1fd31cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1fd320: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1FD320u;
    {
        const bool branch_taken_0x1fd320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd320) {
            ctx->pc = 0x1FD37Cu;
            goto label_1fd37c;
        }
    }
    ctx->pc = 0x1FD328u;
label_1fd328:
    // 0x1fd328: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x1fd328u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd32c: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FD32Cu;
    {
        const bool branch_taken_0x1fd32c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd32c) {
            ctx->pc = 0x1FD34Cu;
            goto label_1fd34c;
        }
    }
    ctx->pc = 0x1FD334u;
    // 0x1fd334: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fd334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fd338: 0x16430004  bne         $s2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD338u;
    {
        const bool branch_taken_0x1fd338 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fd338) {
            ctx->pc = 0x1FD34Cu;
            goto label_1fd34c;
        }
    }
    ctx->pc = 0x1FD340u;
    // 0x1fd340: 0x26130001  addiu       $s3, $s0, 0x1
    ctx->pc = 0x1fd340u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fd344: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1FD344u;
    {
        const bool branch_taken_0x1fd344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd344) {
            ctx->pc = 0x1FD37Cu;
            goto label_1fd37c;
        }
    }
    ctx->pc = 0x1FD34Cu;
label_1fd34c:
    // 0x1fd34c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fd34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fd350: 0x8c63bfb0  lw          $v1, -0x4050($v1)
    ctx->pc = 0x1fd350u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BFB0u));
    // 0x1fd354: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fd354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fd358: 0x16030007  bne         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FD358u;
    {
        const bool branch_taken_0x1fd358 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fd358) {
            ctx->pc = 0x1FD378u;
            goto label_1fd378;
        }
    }
    ctx->pc = 0x1FD360u;
    // 0x1fd360: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fd360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd364: 0x16430004  bne         $s2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD364u;
    {
        const bool branch_taken_0x1fd364 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fd364) {
            ctx->pc = 0x1FD378u;
            goto label_1fd378;
        }
    }
    ctx->pc = 0x1FD36Cu;
    // 0x1fd36c: 0x2613ffff  addiu       $s3, $s0, -0x1
    ctx->pc = 0x1fd36cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fd370: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD370u;
    {
        const bool branch_taken_0x1fd370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd370) {
            ctx->pc = 0x1FD37Cu;
            goto label_1fd37c;
        }
    }
    ctx->pc = 0x1FD378u;
label_1fd378:
    // 0x1fd378: 0x2129821  addu        $s3, $s0, $s2
    ctx->pc = 0x1fd378u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1fd37c:
    // 0x1fd37c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1fd37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fd380: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1fd380u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x1fd384: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1fd384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1fd388: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1fd388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x1fd38c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fd38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fd390: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x1fd390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x1fd394: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1fd394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1fd398: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x1fd398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x1fd39c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1fd39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fd3a0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1fd3a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fd3a4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1fd3a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fd3a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fd3a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fd3ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fd3acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fd3b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fd3b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fd3b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fd3b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd3b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fd3b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd3bc: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1fd3bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1fd3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD3C8u;
    // 0x1fd3c8: 0x0  nop
    ctx->pc = 0x1fd3c8u;
    // NOP
    // 0x1fd3cc: 0x0  nop
    ctx->pc = 0x1fd3ccu;
    // NOP
    ctx->pc = 0x1fd3d0u;
}
