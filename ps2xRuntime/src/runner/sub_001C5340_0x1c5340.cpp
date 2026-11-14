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

// Function: sub_001C5340
// Address: 0x1c5340 - 0x1c5550
void sub_001C5340_0x1c5340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5340_0x1c5340");
#endif

    switch (ctx->pc) {
        case 0x1c5414u: goto label_1c5414;
        case 0x1c545cu: goto label_1c545c;
        case 0x1c5478u: goto label_1c5478;
        case 0x1c54c4u: goto label_1c54c4;
        case 0x1c54ecu: goto label_1c54ec;
        case 0x1c5518u: goto label_1c5518;
        default: break;
    }

    ctx->pc = 0x1c5340u;

label_1c5340:
    // 0x1c5340: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c5340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c5344: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1c5344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1c5348: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1c5348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1c534c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c534cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1c5350: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c5350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c5354: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c5354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c5358: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c5358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c535c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c535cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c5360: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c5360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c5364: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c5364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c5368: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x1c5368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x1c536c: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x1c536cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x1c5370: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1c5370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c5374: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c5374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c5378: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c5378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c537c: 0x438818  mult        $s1, $v0, $v1
    ctx->pc = 0x1c537cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1c5380: 0x8f83bb3c  lw          $v1, -0x44C4($gp)
    ctx->pc = 0x1c5380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949692)));
    // 0x1c5384: 0x8f82bb38  lw          $v0, -0x44C8($gp)
    ctx->pc = 0x1c5384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949688)));
    // 0x1c5388: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x1c5388u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c538c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1c538cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1c5390: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5390u;
    {
        const bool branch_taken_0x1c5390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5390) {
            ctx->pc = 0x1C53B4u;
            goto label_1c53b4;
        }
    }
    ctx->pc = 0x1C5398u;
    // 0x1c5398: 0x8f97bb38  lw          $s7, -0x44C8($gp)
    ctx->pc = 0x1c5398u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949688)));
    // 0x1c539c: 0x8f82bb38  lw          $v0, -0x44C8($gp)
    ctx->pc = 0x1c539cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949688)));
    // 0x1c53a0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c53a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c53a4: 0xaf82bb38  sw          $v0, -0x44C8($gp)
    ctx->pc = 0x1c53a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949688), GPR_U32(ctx, 2));
    // 0x1c53a8: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x1c53a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c53ac: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1C53ACu;
    {
        const bool branch_taken_0x1c53ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c53ac) {
            ctx->pc = 0x1C5518u;
            goto label_1c5518;
        }
    }
    ctx->pc = 0x1C53B4u;
label_1c53b4:
    // 0x1c53b4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c53b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c53b8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1c53b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c53bc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C53BCu;
    {
        const bool branch_taken_0x1c53bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c53bc) {
            ctx->pc = 0x1C5404u;
            goto label_1c5404;
        }
    }
    ctx->pc = 0x1C53C4u;
    // 0x1c53c4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c53c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c53c8: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x1c53c8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x1c53cc: 0x1812  mflo        $v1
    ctx->pc = 0x1c53ccu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1c53d0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1c53d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c53d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c53d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c53d8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1c53d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c53dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c53dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c53e0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c53e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c53e4: 0x438818  mult        $s1, $v0, $v1
    ctx->pc = 0x1c53e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1c53e8: 0x8f97bb38  lw          $s7, -0x44C8($gp)
    ctx->pc = 0x1c53e8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949688)));
    // 0x1c53ec: 0x8f82bb38  lw          $v0, -0x44C8($gp)
    ctx->pc = 0x1c53ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949688)));
    // 0x1c53f0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c53f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c53f4: 0xaf82bb38  sw          $v0, -0x44C8($gp)
    ctx->pc = 0x1c53f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949688), GPR_U32(ctx, 2));
    // 0x1c53f8: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x1c53f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c53fc: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1C53FCu;
    {
        const bool branch_taken_0x1c53fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c53fc) {
            ctx->pc = 0x1C5518u;
            goto label_1c5518;
        }
    }
    ctx->pc = 0x1C5404u;
label_1c5404:
    // 0x1c5404: 0x8f82bb40  lw          $v0, -0x44C0($gp)
    ctx->pc = 0x1c5404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949696)));
    // 0x1c5408: 0x22102  srl         $a0, $v0, 4
    ctx->pc = 0x1c5408u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1c540c: 0xc0714c4  jal         func_1C5310
    ctx->pc = 0x1C540Cu;
    SET_GPR_U32(ctx, 31, 0x1C5414u);
    ctx->pc = 0x1C5310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5310u, 0x1C540Cu, 0x1C5414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5414u;
label_1c5414:
    // 0x1c5414: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1c5414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c5418: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x1c5418u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c541c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C541Cu;
    {
        const bool branch_taken_0x1c541c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c541c) {
            ctx->pc = 0x1C5450u;
            goto label_1c5450;
        }
    }
    ctx->pc = 0x1C5424u;
    // 0x1c5424: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1c5424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1c5428: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x1c5428u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x1c542c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c542cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c5430: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1c5430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1c5434: 0x2442bf00  addiu       $v0, $v0, -0x4100
    ctx->pc = 0x1c5434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950656));
    // 0x1c5438: 0x43b021  addu        $s6, $v0, $v1
    ctx->pc = 0x1c5438u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c543c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1c543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1c5440: 0x8f82bb38  lw          $v0, -0x44C8($gp)
    ctx->pc = 0x1c5440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949688)));
    // 0x1c5444: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c5444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c5448: 0x8f82bb38  lw          $v0, -0x44C8($gp)
    ctx->pc = 0x1c5448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949688)));
    // 0x1c544c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1c544cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_1c5450:
    // 0x1c5450: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c5450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5454: 0xc071554  jal         func_1C5550
    ctx->pc = 0x1C5454u;
    SET_GPR_U32(ctx, 31, 0x1C545Cu);
    ctx->pc = 0x1C5550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5550u, 0x1C5454u, 0x1C545Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C545Cu;
label_1c545c:
    // 0x1c545c: 0xaf82bb38  sw          $v0, -0x44C8($gp)
    ctx->pc = 0x1c545cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949688), GPR_U32(ctx, 2));
    // 0x1c5460: 0x8f82bb38  lw          $v0, -0x44C8($gp)
    ctx->pc = 0x1c5460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949688)));
    // 0x1c5464: 0x14020022  bne         $zero, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C5464u;
    {
        const bool branch_taken_0x1c5464 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c5464) {
            ctx->pc = 0x1C54F0u;
            goto label_1c54f0;
        }
    }
    ctx->pc = 0x1C546Cu;
    // 0x1c546c: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x1c546cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c5470: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1C5470u;
    {
        const bool branch_taken_0x1c5470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5470) {
            ctx->pc = 0x1C54D0u;
            goto label_1c54d0;
        }
    }
    ctx->pc = 0x1C5478u;
label_1c5478:
    // 0x1c5478: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x1c5478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1c547c: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x1c547cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x1c5480: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c5480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c5484: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1c5484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1c5488: 0x2442bf00  addiu       $v0, $v0, -0x4100
    ctx->pc = 0x1c5488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950656));
    // 0x1c548c: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x1c548cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c5490: 0x8eb40000  lw          $s4, 0x0($s5)
    ctx->pc = 0x1c5490u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c5494: 0x1014000d  beq         $zero, $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x1C5494u;
    {
        const bool branch_taken_0x1c5494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 20));
        if (branch_taken_0x1c5494) {
            ctx->pc = 0x1C54CCu;
            goto label_1c54cc;
        }
    }
    ctx->pc = 0x1C549Cu;
    // 0x1c549c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1c549cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1c54a0: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1c54a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x1c54a4: 0xaf94bb38  sw          $s4, -0x44C8($gp)
    ctx->pc = 0x1c54a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949688), GPR_U32(ctx, 20));
    // 0x1c54a8: 0x8f82bb38  lw          $v0, -0x44C8($gp)
    ctx->pc = 0x1c54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949688)));
    // 0x1c54ac: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1c54acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c54b0: 0xaf82bb3c  sw          $v0, -0x44C4($gp)
    ctx->pc = 0x1c54b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949692), GPR_U32(ctx, 2));
    // 0x1c54b4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1c54b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c54b8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1c54b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c54bc: 0xc0714d0  jal         func_1C5340
    ctx->pc = 0x1C54BCu;
    SET_GPR_U32(ctx, 31, 0x1C54C4u);
    ctx->pc = 0x1C5340u;
    goto label_1c5340;
    ctx->pc = 0x1C54C4u;
label_1c54c4:
    // 0x1c54c4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1C54C4u;
    {
        const bool branch_taken_0x1c54c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c54c4) {
            ctx->pc = 0x1C5518u;
            goto label_1c5518;
        }
    }
    ctx->pc = 0x1C54CCu;
label_1c54cc:
    // 0x1c54cc: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x1c54ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1c54d0:
    // 0x1c54d0: 0x2e410081  sltiu       $at, $s2, 0x81
    ctx->pc = 0x1c54d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c54d4: 0x1420ffe8  bnez        $at, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1C54D4u;
    {
        const bool branch_taken_0x1c54d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c54d4) {
            ctx->pc = 0x1C5478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5478;
        }
    }
    ctx->pc = 0x1C54DCu;
    // 0x1c54dc: 0xaf80bb3c  sw          $zero, -0x44C4($gp)
    ctx->pc = 0x1c54dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949692), GPR_U32(ctx, 0));
    // 0x1c54e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c54e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c54e4: 0xc071554  jal         func_1C5550
    ctx->pc = 0x1C54E4u;
    SET_GPR_U32(ctx, 31, 0x1C54ECu);
    ctx->pc = 0x1C5550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5550u, 0x1C54E4u, 0x1C54ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C54ECu;
label_1c54ec:
    // 0x1c54ec: 0xaf82bb38  sw          $v0, -0x44C8($gp)
    ctx->pc = 0x1c54ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949688), GPR_U32(ctx, 2));
label_1c54f0:
    // 0x1c54f0: 0x8f82bb40  lw          $v0, -0x44C0($gp)
    ctx->pc = 0x1c54f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949696)));
    // 0x1c54f4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1c54f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1c54f8: 0xaf82bb40  sw          $v0, -0x44C0($gp)
    ctx->pc = 0x1c54f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949696), GPR_U32(ctx, 2));
    // 0x1c54fc: 0x8f82bb38  lw          $v0, -0x44C8($gp)
    ctx->pc = 0x1c54fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949688)));
    // 0x1c5500: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1c5500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1c5504: 0xaf82bb3c  sw          $v0, -0x44C4($gp)
    ctx->pc = 0x1c5504u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949692), GPR_U32(ctx, 2));
    // 0x1c5508: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1c5508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c550c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1c550cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c5510: 0xc0714d0  jal         func_1C5340
    ctx->pc = 0x1C5510u;
    SET_GPR_U32(ctx, 31, 0x1C5518u);
    ctx->pc = 0x1C5340u;
    goto label_1c5340;
    ctx->pc = 0x1C5518u;
label_1c5518:
    // 0x1c5518: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1c5518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c551c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1c551cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c5520: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1c5520u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c5524: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c5524u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c5528: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c5528u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c552c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c552cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c5530: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c5530u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5534: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c5534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5538: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c5538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c553c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1c553cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c5540: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5548u;
    // 0x1c5548: 0x0  nop
    ctx->pc = 0x1c5548u;
    // NOP
    // 0x1c554c: 0x0  nop
    ctx->pc = 0x1c554cu;
    // NOP
    ctx->pc = 0x1c5550u;
}
