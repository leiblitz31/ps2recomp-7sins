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

// Function: sub_003401F8
// Address: 0x3401f8 - 0x340828
void sub_003401F8_0x3401f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003401F8_0x3401f8");
#endif

    switch (ctx->pc) {
        case 0x34024cu: goto label_34024c;
        case 0x340380u: goto label_340380;
        case 0x34054cu: goto label_34054c;
        case 0x3406a0u: goto label_3406a0;
        case 0x3406bcu: goto label_3406bc;
        default: break;
    }

    ctx->pc = 0x3401f8u;

    // 0x3401f8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3401f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x3401fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x3401fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x340200: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x340200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x340204: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x340204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340208: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x340208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x34020c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x34020cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x340210: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x340210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340214: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x340214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x340218: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x340218u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34021c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x34021cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x340220: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x340220u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340224: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x340224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x340228: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x340228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x34022c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x34022cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x340230: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x340230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x340234: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x340234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x340238: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x340238u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x34023c: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x34023cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x340240: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x340240u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x340244: 0xc0cead0  jal         func_33AB40
    ctx->pc = 0x340244u;
    SET_GPR_U32(ctx, 31, 0x34024Cu);
    ctx->pc = 0x340248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340244u;
    // 0x340248: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AB40u, 0x340244u, 0x34024Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34024Cu;
label_34024c:
    // 0x34024c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x34024cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340250: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x340250u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340254: 0x8c470020  lw          $a3, 0x20($v0)
    ctx->pc = 0x340254u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x340258: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x340258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x34025c: 0x2442c210  addiu       $v0, $v0, -0x3DF0
    ctx->pc = 0x34025cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951440));
    // 0x340260: 0x8c44007c  lw          $a0, 0x7C($v0)
    ctx->pc = 0x340260u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61C28Cu));
    // 0x340264: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x340264u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C234u));
    // 0x340268: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x340268u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x61C224u));
    // 0x34026c: 0x28860000  slti        $a2, $a0, 0x0
    ctx->pc = 0x34026cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x340270: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x340270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x340274: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x340274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x340278: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x340278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x34027c: 0x1058821  addu        $s1, $t0, $a1
    ctx->pc = 0x34027cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x340280: 0x62f00a  movz        $fp, $v1, $v0
    ctx->pc = 0x340280u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 3));
    // 0x340284: 0x10e00158  beqz        $a3, . + 4 + (0x158 << 2)
    ctx->pc = 0x340284u;
    {
        const bool branch_taken_0x340284 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x340288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340284u;
        // 0x340288: 0x86980a  movz        $s3, $a0, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340284) {
            ctx->pc = 0x3407E8u;
            goto label_3407e8;
        }
    }
    ctx->pc = 0x34028Cu;
    // 0x34028c: 0x8ce80010  lw          $t0, 0x10($a3)
    ctx->pc = 0x34028cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x340290: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x340290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x340294: 0x11020155  beq         $t0, $v0, . + 4 + (0x155 << 2)
    ctx->pc = 0x340294u;
    {
        const bool branch_taken_0x340294 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x340298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340294u;
        // 0x340298: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340294) {
            ctx->pc = 0x3407ECu;
            goto label_3407ec;
        }
    }
    ctx->pc = 0x34029Cu;
    // 0x34029c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x34029cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3402a0: 0x13c0001c  beqz        $fp, . + 4 + (0x1C << 2)
    ctx->pc = 0x3402A0u;
    {
        const bool branch_taken_0x3402a0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3402A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3402A0u;
        // 0x3402a4: 0x483023  subu        $a2, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3402a0) {
            ctx->pc = 0x340314u;
            goto label_340314;
        }
    }
    ctx->pc = 0x3402A8u;
    // 0x3402a8: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x3402a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3402ac: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x3402acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x3402b0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x3402b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3402b4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3402B4u;
    {
        const bool branch_taken_0x3402b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3402B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3402B4u;
        // 0x3402b8: 0xafb20030  sw          $s2, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3402b4) {
            ctx->pc = 0x3402E0u;
            goto label_3402e0;
        }
    }
    ctx->pc = 0x3402BCu;
    // 0x3402bc: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x3402bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x3402c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3402c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3402c4: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x3402c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x3402c8: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x3402c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x3402cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3402ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3402d0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3402d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x3402d4: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x3402d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3402d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3402d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3402dc: 0x829023  subu        $s2, $a0, $v0
    ctx->pc = 0x3402dcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3402e0:
    // 0x3402e0: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x3402e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x3402e4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3402E4u;
    {
        const bool branch_taken_0x3402e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3402E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3402E4u;
        // 0x3402e8: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3402e4) {
            ctx->pc = 0x340314u;
            goto label_340314;
        }
    }
    ctx->pc = 0x3402ECu;
    // 0x3402ec: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x3402ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x3402f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3402f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3402f4: 0x8fc50020  lw          $a1, 0x20($fp)
    ctx->pc = 0x3402f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x3402f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3402f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3402fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3402fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x340300: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x340300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x340304: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x340304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x340308: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x340308u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34030c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x34030cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x340310: 0x829023  subu        $s2, $a0, $v0
    ctx->pc = 0x340310u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_340314:
    // 0x340314: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x340314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340318: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x340318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x34031c: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x34031cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x340320: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x340320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x340324: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x340324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x340328: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x340328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x34032c: 0x8e2300a8  lw          $v1, 0xA8($s1)
    ctx->pc = 0x34032cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x340330: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x340330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x340334: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x340334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x340338: 0x1041818  mult        $v1, $t0, $a0
    ctx->pc = 0x340338u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34033c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x34033cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x340340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x340340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x340344: 0x18c00127  blez        $a2, . + 4 + (0x127 << 2)
    ctx->pc = 0x340344u;
    {
        const bool branch_taken_0x340344 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x340348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340344u;
        // 0x340348: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340344) {
            ctx->pc = 0x3407E4u;
            goto label_3407e4;
        }
    }
    ctx->pc = 0x34034Cu;
    // 0x34034c: 0x3c160bb3  lui         $s6, 0xBB3
    ctx->pc = 0x34034cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)2995 << 16));
    // 0x340350: 0x3c143619  lui         $s4, 0x3619
    ctx->pc = 0x340350u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)13849 << 16));
    // 0x340354: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x340354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x340358: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x340358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x34035c: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x34035cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340360: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x340360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x340364: 0x36d68435  ori         $s6, $s6, 0x8435
    ctx->pc = 0x340364u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)33845);
    // 0x340368: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x340368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x34036c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x34036cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x340370: 0x3694636b  ori         $s4, $s4, 0x636B
    ctx->pc = 0x340370u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)25451);
    // 0x340374: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x340374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x340378: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x340378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x34037c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x34037cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_340380:
    // 0x340380: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x340380u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x340384: 0x2508c210  addiu       $t0, $t0, -0x3DF0
    ctx->pc = 0x340384u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951440));
    // 0x340388: 0x8d02005c  lw          $v0, 0x5C($t0)
    ctx->pc = 0x340388u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C26Cu));
    // 0x34038c: 0x44000f2  bltz        $v0, . + 4 + (0xF2 << 2)
    ctx->pc = 0x34038Cu;
    {
        const bool branch_taken_0x34038c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x340390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34038Cu;
        // 0x340390: 0x2161018  mult        $v0, $s0, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34038c) {
            ctx->pc = 0x340758u;
            goto label_340758;
        }
    }
    ctx->pc = 0x340394u;
    // 0x340394: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x340394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x340398: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x340398u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34039c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34039cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3403a0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3403a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x3403a4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3403a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3403a8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3403A8u;
    {
        const bool branch_taken_0x3403a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3403ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3403A8u;
        // 0x3403ac: 0x461600c0  add.s       $f3, $f0, $f22 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3403a8) {
            ctx->pc = 0x3403F4u;
            goto label_3403f4;
        }
    }
    ctx->pc = 0x3403B0u;
    // 0x3403b0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3403b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3403b4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3403B4u;
    {
        const bool branch_taken_0x3403b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3403B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3403B4u;
        // 0x3403b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3403b4) {
            ctx->pc = 0x3403CCu;
            goto label_3403cc;
        }
    }
    ctx->pc = 0x3403BCu;
    // 0x3403bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3403bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3403c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3403c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3403c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3403C4u;
    {
        const bool branch_taken_0x3403c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3403C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3403C4u;
        // 0x3403c8: 0x46001802  mul.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3403c4) {
            ctx->pc = 0x3403E4u;
            goto label_3403e4;
        }
    }
    ctx->pc = 0x3403CCu;
label_3403cc:
    // 0x3403cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3403ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3403d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3403d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3403d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3403d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3403d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3403d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3403dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3403dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3403e0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x3403e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3403e4:
    // 0x3403e4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3403e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3403e8: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x3403e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x3403ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3403ECu;
    {
        const bool branch_taken_0x3403ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3403F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3403ECu;
        // 0x3403f0: 0x2161018  mult        $v0, $s0, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3403ec) {
            ctx->pc = 0x340414u;
            goto label_340414;
        }
    }
    ctx->pc = 0x3403F4u;
label_3403f4:
    // 0x3403f4: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x3403f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3403f8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3403f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3403fc: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x3403fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x340400: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x340400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x340404: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x340404u;
    {
        const bool branch_taken_0x340404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x340408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340404u;
        // 0x340408: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340404) {
            ctx->pc = 0x340410u;
            goto label_340410;
        }
    }
    ctx->pc = 0x34040Cu;
    // 0x34040c: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x34040cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_340410:
    // 0x340410: 0x2161018  mult        $v0, $s0, $s6
    ctx->pc = 0x340410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_340414:
    // 0x340414: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x340414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x340418: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x340418u;
    {
        const bool branch_taken_0x340418 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x34041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340418u;
        // 0x34041c: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x340418) {
            ctx->pc = 0x340430u;
            goto label_340430;
        }
    }
    ctx->pc = 0x340420u;
    // 0x340420: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x340420u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x340424: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x340424u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x340428: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x340428u;
    {
        const bool branch_taken_0x340428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340428u;
        // 0x34042c: 0x46140842  mul.s       $f1, $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x340428) {
            ctx->pc = 0x340448u;
            goto label_340448;
        }
    }
    ctx->pc = 0x340430u;
label_340430:
    // 0x340430: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x340430u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x340434: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x340434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x340438: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x340438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34043c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34043cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x340440: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x340440u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x340444: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x340444u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_340448:
    // 0x340448: 0x2161818  mult        $v1, $s0, $s6
    ctx->pc = 0x340448u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34044c: 0x2471018  mult        $v0, $s2, $a3
    ctx->pc = 0x34044cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x340450: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x340450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x340454: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x340454u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x340458: 0x748021  addu        $s0, $v1, $s4
    ctx->pc = 0x340458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x34045c: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x34045cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x340460: 0x461508c1  sub.s       $f3, $f1, $f21
    ctx->pc = 0x340460u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x340464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x340464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x340468: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x340468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34046c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x34046cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x340470: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x340470u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x340474: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x340474u;
    {
        const bool branch_taken_0x340474 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x340478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340474u;
        // 0x340478: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x340474) {
            ctx->pc = 0x34048Cu;
            goto label_34048c;
        }
    }
    ctx->pc = 0x34047Cu;
    // 0x34047c: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x34047cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x340480: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x340480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x340484: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x340484u;
    {
        const bool branch_taken_0x340484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340484u;
        // 0x340488: 0x46140842  mul.s       $f1, $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x340484) {
            ctx->pc = 0x3404A8u;
            goto label_3404a8;
        }
    }
    ctx->pc = 0x34048Cu;
label_34048c:
    // 0x34048c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x34048cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x340490: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x340490u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x340494: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x340494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x340498: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x340498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34049c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34049cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3404a0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3404a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x3404a4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3404a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_3404a8:
    // 0x3404a8: 0x2161818  mult        $v1, $s0, $s6
    ctx->pc = 0x3404a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3404ac: 0x2471018  mult        $v0, $s2, $a3
    ctx->pc = 0x3404acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3404b0: 0xc622002c  lwc1        $f2, 0x2C($s1)
    ctx->pc = 0x3404b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3404b4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3404b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x3404b8: 0x748021  addu        $s0, $v1, $s4
    ctx->pc = 0x3404b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x3404bc: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x3404bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3404c0: 0x461508c1  sub.s       $f3, $f1, $f21
    ctx->pc = 0x3404c0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x3404c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3404c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3404c8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3404c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3404cc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3404ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3404d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3404d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3404d4: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3404D4u;
    {
        const bool branch_taken_0x3404d4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3404D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3404D4u;
        // 0x3404d8: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3404d4) {
            ctx->pc = 0x3404ECu;
            goto label_3404ec;
        }
    }
    ctx->pc = 0x3404DCu;
    // 0x3404dc: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x3404dcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3404e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3404e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3404e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3404E4u;
    {
        const bool branch_taken_0x3404e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3404E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3404E4u;
        // 0x3404e8: 0x46140842  mul.s       $f1, $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3404e4) {
            ctx->pc = 0x340508u;
            goto label_340508;
        }
    }
    ctx->pc = 0x3404ECu;
label_3404ec:
    // 0x3404ec: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3404ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3404f0: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x3404f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x3404f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3404f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3404f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3404f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3404fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3404fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x340500: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x340500u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x340504: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x340504u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_340508:
    // 0x340508: 0x2471018  mult        $v0, $s2, $a3
    ctx->pc = 0x340508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34050c: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x34050cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x340510: 0xc6220030  lwc1        $f2, 0x30($s1)
    ctx->pc = 0x340510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x340514: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x340514u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x340518: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x340518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x34051c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34051cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x340520: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x340520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340524: 0x461508c1  sub.s       $f3, $f1, $f21
    ctx->pc = 0x340524u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x340528: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x340528u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x34052c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x34052cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x340530: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x340530u;
    {
        const bool branch_taken_0x340530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x340534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340530u;
        // 0x340534: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x340530) {
            ctx->pc = 0x340550u;
            goto label_340550;
        }
    }
    ctx->pc = 0x340538u;
    // 0x340538: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x340538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x34053c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34053cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x340540: 0x7fa70040  sq          $a3, 0x40($sp)
    ctx->pc = 0x340540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
    // 0x340544: 0xc104d64  jal         func_413590
    ctx->pc = 0x340544u;
    SET_GPR_U32(ctx, 31, 0x34054Cu);
    ctx->pc = 0x340548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340544u;
    // 0x340548: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x340544u, 0x34054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34054Cu;
label_34054c:
    // 0x34054c: 0x7ba70040  lq          $a3, 0x40($sp)
    ctx->pc = 0x34054cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_340550:
    // 0x340550: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x340550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x340554: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x340554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340558: 0x14480080  bne         $v0, $t0, . + 4 + (0x80 << 2)
    ctx->pc = 0x340558u;
    {
        const bool branch_taken_0x340558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x34055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340558u;
        // 0x34055c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340558) {
            ctx->pc = 0x34075Cu;
            goto label_34075c;
        }
    }
    ctx->pc = 0x340560u;
    // 0x340560: 0x2161018  mult        $v0, $s0, $s6
    ctx->pc = 0x340560u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x340564: 0x2463c210  addiu       $v1, $v1, -0x3DF0
    ctx->pc = 0x340564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951440));
    // 0x340568: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x340568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x34056c: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x34056cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x340570: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x340570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x340574: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x340574u;
    {
        const bool branch_taken_0x340574 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x340578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340574u;
        // 0x340578: 0x82a821  addu        $s5, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340574) {
            ctx->pc = 0x34058Cu;
            goto label_34058c;
        }
    }
    ctx->pc = 0x34057Cu;
    // 0x34057c: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x34057cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x340580: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x340580u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x340584: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x340584u;
    {
        const bool branch_taken_0x340584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340584u;
        // 0x340588: 0x46140842  mul.s       $f1, $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x340584) {
            ctx->pc = 0x3405A8u;
            goto label_3405a8;
        }
    }
    ctx->pc = 0x34058Cu;
label_34058c:
    // 0x34058c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x34058cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x340590: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x340590u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x340594: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x340594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x340598: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x340598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34059c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34059cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3405a0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3405a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x3405a4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3405a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_3405a8:
    // 0x3405a8: 0x2161818  mult        $v1, $s0, $s6
    ctx->pc = 0x3405a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3405ac: 0x2471018  mult        $v0, $s2, $a3
    ctx->pc = 0x3405acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3405b0: 0xc6220068  lwc1        $f2, 0x68($s1)
    ctx->pc = 0x3405b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3405b4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3405b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x3405b8: 0x748021  addu        $s0, $v1, $s4
    ctx->pc = 0x3405b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x3405bc: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x3405bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x3405c0: 0x461508c1  sub.s       $f3, $f1, $f21
    ctx->pc = 0x3405c0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x3405c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3405c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3405c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3405c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3405cc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3405ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3405d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3405d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3405d4: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3405D4u;
    {
        const bool branch_taken_0x3405d4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3405D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3405D4u;
        // 0x3405d8: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3405d4) {
            ctx->pc = 0x3405ECu;
            goto label_3405ec;
        }
    }
    ctx->pc = 0x3405DCu;
    // 0x3405dc: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x3405dcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3405e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3405e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3405e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3405E4u;
    {
        const bool branch_taken_0x3405e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3405E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3405E4u;
        // 0x3405e8: 0x46140842  mul.s       $f1, $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3405e4) {
            ctx->pc = 0x340608u;
            goto label_340608;
        }
    }
    ctx->pc = 0x3405ECu;
label_3405ec:
    // 0x3405ec: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3405ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3405f0: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x3405f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x3405f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3405f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3405f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3405f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3405fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3405fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x340600: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x340600u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x340604: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x340604u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_340608:
    // 0x340608: 0x2161818  mult        $v1, $s0, $s6
    ctx->pc = 0x340608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34060c: 0x2471018  mult        $v0, $s2, $a3
    ctx->pc = 0x34060cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x340610: 0xc622006c  lwc1        $f2, 0x6C($s1)
    ctx->pc = 0x340610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x340614: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x340614u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x340618: 0x748021  addu        $s0, $v1, $s4
    ctx->pc = 0x340618u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x34061c: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x34061cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x340620: 0x461508c1  sub.s       $f3, $f1, $f21
    ctx->pc = 0x340620u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x340624: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x340624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x340628: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x340628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34062c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x34062cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x340630: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x340630u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x340634: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x340634u;
    {
        const bool branch_taken_0x340634 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x340638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340634u;
        // 0x340638: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x340634) {
            ctx->pc = 0x34064Cu;
            goto label_34064c;
        }
    }
    ctx->pc = 0x34063Cu;
    // 0x34063c: 0x44901000  mtc1        $s0, $f2
    ctx->pc = 0x34063cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x340640: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x340640u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x340644: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x340644u;
    {
        const bool branch_taken_0x340644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340644u;
        // 0x340648: 0x46141082  mul.s       $f2, $f2, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x340644) {
            ctx->pc = 0x340668u;
            goto label_340668;
        }
    }
    ctx->pc = 0x34064Cu;
label_34064c:
    // 0x34064c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x34064cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x340650: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x340650u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x340654: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x340654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x340658: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x340658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34065c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x34065cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x340660: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x340660u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x340664: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x340664u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_340668:
    // 0x340668: 0x2471018  mult        $v0, $s2, $a3
    ctx->pc = 0x340668u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34066c: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x34066cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x340670: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x340670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340674: 0xc6210070  lwc1        $f1, 0x70($s1)
    ctx->pc = 0x340674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340678: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x340678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34067c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x34067cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x340680: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x340680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x340684: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x340684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340688: 0x461510c1  sub.s       $f3, $f2, $f21
    ctx->pc = 0x340688u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
    // 0x34068c: 0x7fa70040  sq          $a3, 0x40($sp)
    ctx->pc = 0x34068cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
    // 0x340690: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x340690u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x340694: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x340694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x340698: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x340698u;
    SET_GPR_U32(ctx, 31, 0x3406A0u);
    ctx->pc = 0x34069Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340698u;
    // 0x34069c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x340698u, 0x3406A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3406A0u;
label_3406a0:
    // 0x3406a0: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x3406a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x3406a4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3406A4u;
    {
        const bool branch_taken_0x3406a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3406A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3406A4u;
        // 0x3406a8: 0x7ba70040  lq          $a3, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3406a4) {
            ctx->pc = 0x3406C0u;
            goto label_3406c0;
        }
    }
    ctx->pc = 0x3406ACu;
    // 0x3406ac: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x3406acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x3406b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3406b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3406b4: 0xc104d84  jal         func_413610
    ctx->pc = 0x3406B4u;
    SET_GPR_U32(ctx, 31, 0x3406BCu);
    ctx->pc = 0x3406B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3406B4u;
    // 0x3406b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413610u, 0x3406B4u, 0x3406BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3406BCu;
label_3406bc:
    // 0x3406bc: 0x7ba70040  lq          $a3, 0x40($sp)
    ctx->pc = 0x3406bcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3406c0:
    // 0x3406c0: 0x2161018  mult        $v0, $s0, $s6
    ctx->pc = 0x3406c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3406c4: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x3406c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3406c8: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3406C8u;
    {
        const bool branch_taken_0x3406c8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3406CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3406C8u;
        // 0x3406cc: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3406c8) {
            ctx->pc = 0x3406E0u;
            goto label_3406e0;
        }
    }
    ctx->pc = 0x3406D0u;
    // 0x3406d0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3406d0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3406d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3406d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3406d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3406D8u;
    {
        const bool branch_taken_0x3406d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3406DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3406D8u;
        // 0x3406dc: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3406d8) {
            ctx->pc = 0x3406F8u;
            goto label_3406f8;
        }
    }
    ctx->pc = 0x3406E0u;
label_3406e0:
    // 0x3406e0: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x3406e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x3406e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3406e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3406e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3406e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3406ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3406ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3406f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3406f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3406f4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3406f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3406f8:
    // 0x3406f8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3406f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3406fc: 0x461500c1  sub.s       $f3, $f0, $f21
    ctx->pc = 0x3406fcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x340700: 0xc6220050  lwc1        $f2, 0x50($s1)
    ctx->pc = 0x340700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x340704: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x340704u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x340708: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x340708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34070c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x34070cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340710: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x340710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x340714: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x340714u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x340718: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x340718u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x34071c: 0xc6220050  lwc1        $f2, 0x50($s1)
    ctx->pc = 0x34071cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x340720: 0xc621004c  lwc1        $f1, 0x4C($s1)
    ctx->pc = 0x340720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340724: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x340724u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x340728: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x340728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34072c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34072cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x340730: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x340730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x340734: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x340734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x340738: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x340738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34073c: 0xc622004c  lwc1        $f2, 0x4C($s1)
    ctx->pc = 0x34073cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x340740: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x340740u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x340744: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x340744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340748: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x340748u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x34074c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x34074cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x340750: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x340750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x340754: 0x0  nop
    ctx->pc = 0x340754u;
    // NOP
label_340758:
    // 0x340758: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x340758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_34075c:
    // 0x34075c: 0x2463c210  addiu       $v1, $v1, -0x3DF0
    ctx->pc = 0x34075cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951440));
    // 0x340760: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x340760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x340764: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x340764u;
    {
        const bool branch_taken_0x340764 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x340768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340764u;
        // 0x340768: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340764) {
            ctx->pc = 0x340788u;
            goto label_340788;
        }
    }
    ctx->pc = 0x34076Cu;
    // 0x34076c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x34076cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340770: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x340770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x340774: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x340774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x340778: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x340778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34077c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x34077cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x340780: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x340780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340784: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x340784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_340788:
    // 0x340788: 0x13c0000f  beqz        $fp, . + 4 + (0xF << 2)
    ctx->pc = 0x340788u;
    {
        const bool branch_taken_0x340788 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x34078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340788u;
        // 0x34078c: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340788) {
            ctx->pc = 0x3407C8u;
            goto label_3407c8;
        }
    }
    ctx->pc = 0x340790u;
    // 0x340790: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x340790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x340794: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x340794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x340798: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x340798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x34079c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34079cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3407a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3407A0u;
    {
        const bool branch_taken_0x3407a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3407A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3407A0u;
        // 0x3407a4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3407a0) {
            ctx->pc = 0x3407C4u;
            goto label_3407c4;
        }
    }
    ctx->pc = 0x3407A8u;
    // 0x3407a8: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x3407a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x3407ac: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x3407acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3407b0: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x3407b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x3407b4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x3407b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3407b8: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x3407b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x3407bc: 0x8fa80030  lw          $t0, 0x30($sp)
    ctx->pc = 0x3407bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3407c0: 0x2e8b821  addu        $s7, $s7, $t0
    ctx->pc = 0x3407c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 8)));
label_3407c4:
    // 0x3407c4: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x3407c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_3407c8:
    // 0x3407c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3407c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3407cc: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x3407ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x3407d0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3407d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3407d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3407d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3407d8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x3407d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x3407dc: 0x1480fee8  bnez        $a0, . + 4 + (-0x118 << 2)
    ctx->pc = 0x3407DCu;
    {
        const bool branch_taken_0x3407dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3407E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3407DCu;
        // 0x3407e0: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3407dc) {
            ctx->pc = 0x340380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340380;
        }
    }
    ctx->pc = 0x3407E4u;
label_3407e4:
    // 0x3407e4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x3407e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_3407e8:
    // 0x3407e8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3407e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3407ec:
    // 0x3407ec: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3407ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3407f0: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3407f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3407f4: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3407f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3407f8: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3407f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3407fc: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3407fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x340800: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x340800u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x340804: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x340804u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x340808: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x340808u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x34080c: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x34080cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x340810: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x340810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x340814: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x340814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x340818: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x340818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x34081c: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x34081cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x340820: 0x3e00008  jr          $ra
    ctx->pc = 0x340820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340820u;
        // 0x340824: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340828u;
}
