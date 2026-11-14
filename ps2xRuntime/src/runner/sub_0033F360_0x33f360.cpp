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

// Function: sub_0033F360
// Address: 0x33f360 - 0x33f8d0
void sub_0033F360_0x33f360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F360_0x33f360");
#endif

    switch (ctx->pc) {
        case 0x33f3c4u: goto label_33f3c4;
        case 0x33f4f8u: goto label_33f4f8;
        case 0x33f55cu: goto label_33f55c;
        case 0x33f568u: goto label_33f568;
        case 0x33f610u: goto label_33f610;
        case 0x33f640u: goto label_33f640;
        case 0x33f64cu: goto label_33f64c;
        case 0x33f74cu: goto label_33f74c;
        case 0x33f764u: goto label_33f764;
        default: break;
    }

    ctx->pc = 0x33f360u;

    // 0x33f360: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x33f360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x33f364: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x33f364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x33f368: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x33f368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x33f36c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x33f36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f370: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x33f370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x33f374: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x33f374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x33f378: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x33f378u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f37c: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x33f37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x33f380: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x33f380u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f384: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x33f384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x33f388: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x33f388u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f38c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x33f38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x33f390: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x33f390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x33f394: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x33f394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x33f398: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x33f398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x33f39c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33f39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x33f3a0: 0xe7ba0110  swc1        $f26, 0x110($sp)
    ctx->pc = 0x33f3a0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x33f3a4: 0xe7b90108  swc1        $f25, 0x108($sp)
    ctx->pc = 0x33f3a4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x33f3a8: 0xe7b80100  swc1        $f24, 0x100($sp)
    ctx->pc = 0x33f3a8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x33f3ac: 0xe7b700f8  swc1        $f23, 0xF8($sp)
    ctx->pc = 0x33f3acu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x33f3b0: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x33f3b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x33f3b4: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x33f3b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x33f3b8: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x33f3b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x33f3bc: 0xc0cead0  jal         func_33AB40
    ctx->pc = 0x33F3BCu;
    SET_GPR_U32(ctx, 31, 0x33F3C4u);
    ctx->pc = 0x33F3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F3BCu;
    // 0x33f3c0: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AB40u, 0x33F3BCu, 0x33F3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F3C4u;
label_33f3c4:
    // 0x33f3c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x33f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33f3c8: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x33f3c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33f3cc: 0x8c470020  lw          $a3, 0x20($v0)
    ctx->pc = 0x33f3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x33f3d0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x33f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x33f3d4: 0x2442c210  addiu       $v0, $v0, -0x3DF0
    ctx->pc = 0x33f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951440));
    // 0x33f3d8: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x33f3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61C290u));
    // 0x33f3dc: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x33f3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C234u));
    // 0x33f3e0: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x33f3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x61C224u));
    // 0x33f3e4: 0x28860000  slti        $a2, $a0, 0x0
    ctx->pc = 0x33f3e4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x33f3e8: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x33f3e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x33f3ec: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x33f3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x33f3f0: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x33f3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x33f3f4: 0x1058821  addu        $s1, $t0, $a1
    ctx->pc = 0x33f3f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x33f3f8: 0x62b80a  movz        $s7, $v1, $v0
    ctx->pc = 0x33f3f8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 3));
    // 0x33f3fc: 0x10e0011f  beqz        $a3, . + 4 + (0x11F << 2)
    ctx->pc = 0x33F3FCu;
    {
        const bool branch_taken_0x33f3fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F3FCu;
        // 0x33f400: 0x86a80a  movz        $s5, $a0, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f3fc) {
            ctx->pc = 0x33F87Cu;
            goto label_33f87c;
        }
    }
    ctx->pc = 0x33F404u;
    // 0x33f404: 0x8ce80010  lw          $t0, 0x10($a3)
    ctx->pc = 0x33f404u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x33f408: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33f408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33f40c: 0x1102011c  beq         $t0, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x33F40Cu;
    {
        const bool branch_taken_0x33f40c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x33F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F40Cu;
        // 0x33f410: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f40c) {
            ctx->pc = 0x33F880u;
            goto label_33f880;
        }
    }
    ctx->pc = 0x33F414u;
    // 0x33f414: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x33f414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x33f418: 0x12e0001c  beqz        $s7, . + 4 + (0x1C << 2)
    ctx->pc = 0x33F418u;
    {
        const bool branch_taken_0x33f418 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F418u;
        // 0x33f41c: 0x483023  subu        $a2, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f418) {
            ctx->pc = 0x33F48Cu;
            goto label_33f48c;
        }
    }
    ctx->pc = 0x33F420u;
    // 0x33f420: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x33f420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x33f424: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x33f424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x33f428: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x33f428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x33f42c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33F42Cu;
    {
        const bool branch_taken_0x33f42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F42Cu;
        // 0x33f430: 0xafb40030  sw          $s4, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f42c) {
            ctx->pc = 0x33F458u;
            goto label_33f458;
        }
    }
    ctx->pc = 0x33F434u;
    // 0x33f434: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x33f434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
    // 0x33f438: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33f438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33f43c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x33f43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x33f440: 0x8ee30020  lw          $v1, 0x20($s7)
    ctx->pc = 0x33f440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x33f444: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33f444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33f448: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x33f448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x33f44c: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x33f44cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33f450: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x33f450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33f454: 0x82a023  subu        $s4, $a0, $v0
    ctx->pc = 0x33f454u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_33f458:
    // 0x33f458: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x33f458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x33f45c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x33F45Cu;
    {
        const bool branch_taken_0x33f45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F45Cu;
        // 0x33f460: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f45c) {
            ctx->pc = 0x33F48Cu;
            goto label_33f48c;
        }
    }
    ctx->pc = 0x33F464u;
    // 0x33f464: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x33f464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
    // 0x33f468: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x33f468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33f46c: 0x8ee50020  lw          $a1, 0x20($s7)
    ctx->pc = 0x33f46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x33f470: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33f470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33f474: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33f474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33f478: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x33f478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x33f47c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x33f47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x33f480: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x33f480u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33f484: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x33f484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33f488: 0x82a023  subu        $s4, $a0, $v0
    ctx->pc = 0x33f488u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_33f48c:
    // 0x33f48c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x33f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33f490: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x33f490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x33f494: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x33f494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x33f498: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x33f498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x33f49c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x33f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x33f4a0: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x33f4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x33f4a4: 0x8e2300a8  lw          $v1, 0xA8($s1)
    ctx->pc = 0x33f4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x33f4a8: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x33f4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x33f4ac: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x33f4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x33f4b0: 0x1041818  mult        $v1, $t0, $a0
    ctx->pc = 0x33f4b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33f4b4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x33f4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33f4b8: 0x18c000ef  blez        $a2, . + 4 + (0xEF << 2)
    ctx->pc = 0x33F4B8u;
    {
        const bool branch_taken_0x33f4b8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x33F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F4B8u;
        // 0x33f4bc: 0x43f021  addu        $fp, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f4b8) {
            ctx->pc = 0x33F878u;
            goto label_33f878;
        }
    }
    ctx->pc = 0x33F4C0u;
    // 0x33f4c0: 0x3c130bb3  lui         $s3, 0xBB3
    ctx->pc = 0x33f4c0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)2995 << 16));
    // 0x33f4c4: 0x3c123619  lui         $s2, 0x3619
    ctx->pc = 0x33f4c4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)13849 << 16));
    // 0x33f4c8: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x33f4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x33f4cc: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x33f4ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x33f4d0: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x33f4d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f4d4: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x33f4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x33f4d8: 0x36738435  ori         $s3, $s3, 0x8435
    ctx->pc = 0x33f4d8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)33845);
    // 0x33f4dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33f4dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33f4e0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x33f4e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x33f4e4: 0x3652636b  ori         $s2, $s2, 0x636B
    ctx->pc = 0x33f4e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)25451);
    // 0x33f4e8: 0xc79a8440  lwc1        $f26, -0x7BC0($gp)
    ctx->pc = 0x33f4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x33f4ec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x33f4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x33f4f0: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x33f4f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x33f4f4: 0x0  nop
    ctx->pc = 0x33f4f4u;
    // NOP
label_33f4f8:
    // 0x33f4f8: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x33f4f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x33f4fc: 0x2508c210  addiu       $t0, $t0, -0x3DF0
    ctx->pc = 0x33f4fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951440));
    // 0x33f500: 0x8d02005c  lw          $v0, 0x5C($t0)
    ctx->pc = 0x33f500u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C26Cu));
    // 0x33f504: 0x44000bc  bltz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x33F504u;
    {
        const bool branch_taken_0x33f504 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33F508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F504u;
        // 0x33f508: 0x2131018  mult        $v0, $s0, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f504) {
            ctx->pc = 0x33F7F8u;
            goto label_33f7f8;
        }
    }
    ctx->pc = 0x33F50Cu;
    // 0x33f50c: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x33f50cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x33f510: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33F510u;
    {
        const bool branch_taken_0x33f510 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F510u;
        // 0x33f514: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f510) {
            ctx->pc = 0x33F528u;
            goto label_33f528;
        }
    }
    ctx->pc = 0x33F518u;
    // 0x33f518: 0x4490a000  mtc1        $s0, $f20
    ctx->pc = 0x33f518u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x33f51c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x33f51cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x33f520: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33F520u;
    {
        const bool branch_taken_0x33f520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F520u;
        // 0x33f524: 0x4617a502  mul.s       $f20, $f20, $f23 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f520) {
            ctx->pc = 0x33F540u;
            goto label_33f540;
        }
    }
    ctx->pc = 0x33F528u;
label_33f528:
    // 0x33f528: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33f528u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33f52c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33f52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33f530: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x33f530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x33f534: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x33f534u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x33f538: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x33f538u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x33f53c: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x33f53cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
label_33f540:
    // 0x33f540: 0x2131018  mult        $v0, $s0, $s3
    ctx->pc = 0x33f540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33f544: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x33f544u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x33f548: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x33f548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x33f54c: 0x4618a501  sub.s       $f20, $f20, $f24
    ctx->pc = 0x33f54cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[24]);
    // 0x33f550: 0x461aa502  mul.s       $f20, $f20, $f26
    ctx->pc = 0x33f550u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[26]);
    // 0x33f554: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x33F554u;
    SET_GPR_U32(ctx, 31, 0x33F55Cu);
    ctx->pc = 0x33F558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F554u;
    // 0x33f558: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x33F554u, 0x33F55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F55Cu;
label_33f55c:
    // 0x33f55c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x33f55cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x33f560: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x33F560u;
    SET_GPR_U32(ctx, 31, 0x33F568u);
    ctx->pc = 0x33F564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F560u;
    // 0x33f564: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x33F560u, 0x33F568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F568u;
label_33f568:
    // 0x33f568: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x33f568u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33f56c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33f56cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33f570: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x33f570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33f574: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x33f574u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x33f578: 0x2131018  mult        $v0, $s0, $s3
    ctx->pc = 0x33f578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33f57c: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x33f57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33f580: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x33f580u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x33f584: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x33f584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x33f588: 0x461908c0  add.s       $f3, $f1, $f25
    ctx->pc = 0x33f588u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[25]);
    // 0x33f58c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x33f58cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x33f590: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x33f590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x33f594: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x33f594u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x33f598: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x33f598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x33f59c: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x33f59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33f5a0: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x33f5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33f5a4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x33f5a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x33f5a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33f5a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33f5ac: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x33f5acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x33f5b0: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33F5B0u;
    {
        const bool branch_taken_0x33f5b0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F5B0u;
        // 0x33f5b4: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f5b0) {
            ctx->pc = 0x33F5C8u;
            goto label_33f5c8;
        }
    }
    ctx->pc = 0x33F5B8u;
    // 0x33f5b8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33f5b8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33f5bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33f5bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33f5c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33F5C0u;
    {
        const bool branch_taken_0x33f5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F5C0u;
        // 0x33f5c4: 0x46170002  mul.s       $f0, $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f5c0) {
            ctx->pc = 0x33F5E4u;
            goto label_33f5e4;
        }
    }
    ctx->pc = 0x33F5C8u;
label_33f5c8:
    // 0x33f5c8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33f5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33f5cc: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33f5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33f5d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33f5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33f5d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33f5d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33f5d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33f5d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33f5dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33f5dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33f5e0: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x33f5e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_33f5e4:
    // 0x33f5e4: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x33f5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33f5e8: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x33f5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x33f5ec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33f5ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33f5f0: 0x461800c1  sub.s       $f3, $f0, $f24
    ctx->pc = 0x33f5f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x33f5f4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x33f5f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x33f5f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33F5F8u;
    {
        const bool branch_taken_0x33f5f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F5F8u;
        // 0x33f5fc: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f5f8) {
            ctx->pc = 0x33F610u;
            goto label_33f610;
        }
    }
    ctx->pc = 0x33F600u;
    // 0x33f600: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x33f600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33f604: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33f604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f608: 0xc104d64  jal         func_413590
    ctx->pc = 0x33F608u;
    SET_GPR_U32(ctx, 31, 0x33F610u);
    ctx->pc = 0x33F60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F608u;
    // 0x33f60c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x33F608u, 0x33F610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F610u;
label_33f610:
    // 0x33f610: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x33f610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x33f614: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33f614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33f618: 0x14440078  bne         $v0, $a0, . + 4 + (0x78 << 2)
    ctx->pc = 0x33F618u;
    {
        const bool branch_taken_0x33f618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x33F61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F618u;
        // 0x33f61c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f618) {
            ctx->pc = 0x33F7FCu;
            goto label_33f7fc;
        }
    }
    ctx->pc = 0x33F620u;
    // 0x33f620: 0x2131818  mult        $v1, $s0, $s3
    ctx->pc = 0x33f620u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33f624: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x33f624u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x33f628: 0x2508c210  addiu       $t0, $t0, -0x3DF0
    ctx->pc = 0x33f628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951440));
    // 0x33f62c: 0xc6ac0010  lwc1        $f12, 0x10($s5)
    ctx->pc = 0x33f62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33f630: 0x8d02005c  lw          $v0, 0x5C($t0)
    ctx->pc = 0x33f630u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C26Cu));
    // 0x33f634: 0x728021  addu        $s0, $v1, $s2
    ctx->pc = 0x33f634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x33f638: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x33F638u;
    SET_GPR_U32(ctx, 31, 0x33F640u);
    ctx->pc = 0x33F63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F638u;
    // 0x33f63c: 0x3c2a021  addu        $s4, $fp, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x33F638u, 0x33F640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F640u;
label_33f640:
    // 0x33f640: 0xc6ac0010  lwc1        $f12, 0x10($s5)
    ctx->pc = 0x33f640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33f644: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x33F644u;
    SET_GPR_U32(ctx, 31, 0x33F64Cu);
    ctx->pc = 0x33F648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F644u;
    // 0x33f648: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x33F644u, 0x33F64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F64Cu;
label_33f64c:
    // 0x33f64c: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33F64Cu;
    {
        const bool branch_taken_0x33f64c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F64Cu;
        // 0x33f650: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f64c) {
            ctx->pc = 0x33F664u;
            goto label_33f664;
        }
    }
    ctx->pc = 0x33F654u;
    // 0x33f654: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33f654u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33f658: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33f658u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33f65c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33F65Cu;
    {
        const bool branch_taken_0x33f65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F65Cu;
        // 0x33f660: 0x46170002  mul.s       $f0, $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f65c) {
            ctx->pc = 0x33F680u;
            goto label_33f680;
        }
    }
    ctx->pc = 0x33F664u;
label_33f664:
    // 0x33f664: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33f664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33f668: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33f668u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33f66c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33f66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33f670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33f670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33f674: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33f674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33f678: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33f678u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33f67c: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x33f67cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_33f680:
    // 0x33f680: 0xc6210068  lwc1        $f1, 0x68($s1)
    ctx->pc = 0x33f680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33f684: 0x4615a082  mul.s       $f2, $f20, $f21
    ctx->pc = 0x33f684u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x33f688: 0x2131018  mult        $v0, $s0, $s3
    ctx->pc = 0x33f688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33f68c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33f68cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33f690: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x33f690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x33f694: 0x461800c1  sub.s       $f3, $f0, $f24
    ctx->pc = 0x33f694u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x33f698: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x33f698u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x33f69c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x33f69cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x33f6a0: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33F6A0u;
    {
        const bool branch_taken_0x33f6a0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F6A0u;
        // 0x33f6a4: 0xe7a20000  swc1        $f2, 0x0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f6a0) {
            ctx->pc = 0x33F6B8u;
            goto label_33f6b8;
        }
    }
    ctx->pc = 0x33F6A8u;
    // 0x33f6a8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33f6a8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33f6ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33f6acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33f6b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33F6B0u;
    {
        const bool branch_taken_0x33f6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F6B0u;
        // 0x33f6b4: 0x46170002  mul.s       $f0, $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f6b0) {
            ctx->pc = 0x33F6D4u;
            goto label_33f6d4;
        }
    }
    ctx->pc = 0x33F6B8u;
label_33f6b8:
    // 0x33f6b8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33f6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33f6bc: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33f6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33f6c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33f6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33f6c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33f6c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33f6c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33f6c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33f6cc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33f6ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33f6d0: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x33f6d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_33f6d4:
    // 0x33f6d4: 0xc621006c  lwc1        $f1, 0x6C($s1)
    ctx->pc = 0x33f6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33f6d8: 0x4616a082  mul.s       $f2, $f20, $f22
    ctx->pc = 0x33f6d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x33f6dc: 0x2131018  mult        $v0, $s0, $s3
    ctx->pc = 0x33f6dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33f6e0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33f6e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33f6e4: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x33f6e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x33f6e8: 0x461800c1  sub.s       $f3, $f0, $f24
    ctx->pc = 0x33f6e8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x33f6ec: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x33f6ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x33f6f0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x33f6f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x33f6f4: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33F6F4u;
    {
        const bool branch_taken_0x33f6f4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F6F4u;
        // 0x33f6f8: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f6f4) {
            ctx->pc = 0x33F70Cu;
            goto label_33f70c;
        }
    }
    ctx->pc = 0x33F6FCu;
    // 0x33f6fc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33f6fcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33f700: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33f700u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33f704: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33F704u;
    {
        const bool branch_taken_0x33f704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F704u;
        // 0x33f708: 0x46170002  mul.s       $f0, $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f704) {
            ctx->pc = 0x33F728u;
            goto label_33f728;
        }
    }
    ctx->pc = 0x33F70Cu;
label_33f70c:
    // 0x33f70c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33f70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33f710: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33f710u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33f714: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33f714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33f718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33f718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33f71c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33f71cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33f720: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33f720u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33f724: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x33f724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_33f728:
    // 0x33f728: 0xc6210070  lwc1        $f1, 0x70($s1)
    ctx->pc = 0x33f728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33f72c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x33f72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f730: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33f730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f734: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33f734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33f738: 0x461800c1  sub.s       $f3, $f0, $f24
    ctx->pc = 0x33f738u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x33f73c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x33f73cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x33f740: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x33f740u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x33f744: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x33F744u;
    SET_GPR_U32(ctx, 31, 0x33F74Cu);
    ctx->pc = 0x33F748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F744u;
    // 0x33f748: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x33F744u, 0x33F74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F74Cu;
label_33f74c:
    // 0x33f74c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x33f74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x33f750: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33F750u;
    {
        const bool branch_taken_0x33f750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F750u;
        // 0x33f754: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f750) {
            ctx->pc = 0x33F764u;
            goto label_33f764;
        }
    }
    ctx->pc = 0x33F758u;
    // 0x33f758: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33f758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f75c: 0xc104d84  jal         func_413610
    ctx->pc = 0x33F75Cu;
    SET_GPR_U32(ctx, 31, 0x33F764u);
    ctx->pc = 0x33F760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F75Cu;
    // 0x33f760: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413610u, 0x33F75Cu, 0x33F764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F764u;
label_33f764:
    // 0x33f764: 0x2131018  mult        $v0, $s0, $s3
    ctx->pc = 0x33f764u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33f768: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x33f768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x33f76c: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33F76Cu;
    {
        const bool branch_taken_0x33f76c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F76Cu;
        // 0x33f770: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f76c) {
            ctx->pc = 0x33F784u;
            goto label_33f784;
        }
    }
    ctx->pc = 0x33F774u;
    // 0x33f774: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33f774u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33f778: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33f778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33f77c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33F77Cu;
    {
        const bool branch_taken_0x33f77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F77Cu;
        // 0x33f780: 0x46170002  mul.s       $f0, $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f77c) {
            ctx->pc = 0x33F79Cu;
            goto label_33f79c;
        }
    }
    ctx->pc = 0x33F784u;
label_33f784:
    // 0x33f784: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33f784u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33f788: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33f788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33f78c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33f78cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33f790: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33f790u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33f794: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33f794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33f798: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x33f798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_33f79c:
    // 0x33f79c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33f79cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33f7a0: 0x461800c1  sub.s       $f3, $f0, $f24
    ctx->pc = 0x33f7a0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x33f7a4: 0xc6220050  lwc1        $f2, 0x50($s1)
    ctx->pc = 0x33f7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33f7a8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x33f7a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x33f7ac: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x33f7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33f7b0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x33f7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33f7b4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x33f7b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x33f7b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x33f7b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33f7bc: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x33f7bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x33f7c0: 0xc6220050  lwc1        $f2, 0x50($s1)
    ctx->pc = 0x33f7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33f7c4: 0xc621004c  lwc1        $f1, 0x4C($s1)
    ctx->pc = 0x33f7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33f7c8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x33f7c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x33f7cc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x33f7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33f7d0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x33f7d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x33f7d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x33f7d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33f7d8: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x33f7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x33f7dc: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x33f7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33f7e0: 0xc622004c  lwc1        $f2, 0x4C($s1)
    ctx->pc = 0x33f7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33f7e4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x33f7e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x33f7e8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x33f7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33f7ec: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x33f7ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x33f7f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x33f7f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x33f7f4: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x33f7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_33f7f8:
    // 0x33f7f8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x33f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_33f7fc:
    // 0x33f7fc: 0x2463c210  addiu       $v1, $v1, -0x3DF0
    ctx->pc = 0x33f7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951440));
    // 0x33f800: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x33f800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x33f804: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33F804u;
    {
        const bool branch_taken_0x33f804 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F804u;
        // 0x33f808: 0xc7a10010  lwc1        $f1, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f804) {
            ctx->pc = 0x33F824u;
            goto label_33f824;
        }
    }
    ctx->pc = 0x33F80Cu;
    // 0x33f80c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x33f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x33f810: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x33f810u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x33f814: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x33f814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33f818: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x33f818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x33f81c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x33f81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33f820: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x33f820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_33f824:
    // 0x33f824: 0x12e0000f  beqz        $s7, . + 4 + (0xF << 2)
    ctx->pc = 0x33F824u;
    {
        const bool branch_taken_0x33f824 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F824u;
        // 0x33f828: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f824) {
            ctx->pc = 0x33F864u;
            goto label_33f864;
        }
    }
    ctx->pc = 0x33F82Cu;
    // 0x33f82c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x33f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x33f830: 0x8ee30010  lw          $v1, 0x10($s7)
    ctx->pc = 0x33f830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x33f834: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33f834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33f838: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33f838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33f83c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33F83Cu;
    {
        const bool branch_taken_0x33f83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F83Cu;
        // 0x33f840: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f83c) {
            ctx->pc = 0x33F860u;
            goto label_33f860;
        }
    }
    ctx->pc = 0x33F844u;
    // 0x33f844: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x33f844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x33f848: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x33f848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33f84c: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x33f84cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x33f850: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x33f850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33f854: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x33f854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x33f858: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x33f858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33f85c: 0x2c4b021  addu        $s6, $s6, $a0
    ctx->pc = 0x33f85cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_33f860:
    // 0x33f860: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33f860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_33f864:
    // 0x33f864: 0x8fa8002c  lw          $t0, 0x2C($sp)
    ctx->pc = 0x33f864u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x33f868: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33f868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33f86c: 0x3c8f021  addu        $fp, $fp, $t0
    ctx->pc = 0x33f86cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
    // 0x33f870: 0x1440ff21  bnez        $v0, . + 4 + (-0xDF << 2)
    ctx->pc = 0x33F870u;
    {
        const bool branch_taken_0x33f870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F870u;
        // 0x33f874: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f870) {
            ctx->pc = 0x33F4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33f4f8;
        }
    }
    ctx->pc = 0x33F878u;
label_33f878:
    // 0x33f878: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x33f878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_33f87c:
    // 0x33f87c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x33f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_33f880:
    // 0x33f880: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x33f880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x33f884: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x33f884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x33f888: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x33f888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x33f88c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x33f88cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x33f890: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x33f890u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x33f894: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x33f894u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x33f898: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x33f898u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33f89c: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x33f89cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33f8a0: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x33f8a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33f8a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33f8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33f8a8: 0xc7ba0110  lwc1        $f26, 0x110($sp)
    ctx->pc = 0x33f8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x33f8ac: 0xc7b90108  lwc1        $f25, 0x108($sp)
    ctx->pc = 0x33f8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x33f8b0: 0xc7b80100  lwc1        $f24, 0x100($sp)
    ctx->pc = 0x33f8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x33f8b4: 0xc7b700f8  lwc1        $f23, 0xF8($sp)
    ctx->pc = 0x33f8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x33f8b8: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x33f8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x33f8bc: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x33f8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x33f8c0: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x33f8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x33f8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x33F8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F8C4u;
        // 0x33f8c8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F8CCu;
    // 0x33f8cc: 0x0  nop
    ctx->pc = 0x33f8ccu;
    // NOP
    ctx->pc = 0x33f8d0u;
}
