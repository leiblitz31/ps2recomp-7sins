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

// Function: sub_00286120
// Address: 0x286120 - 0x286410
void sub_00286120_0x286120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286120_0x286120");
#endif

    switch (ctx->pc) {
        case 0x286174u: goto label_286174;
        case 0x2861dcu: goto label_2861dc;
        case 0x2861fcu: goto label_2861fc;
        case 0x286218u: goto label_286218;
        case 0x286238u: goto label_286238;
        case 0x2862e8u: goto label_2862e8;
        case 0x2862fcu: goto label_2862fc;
        case 0x286334u: goto label_286334;
        case 0x286344u: goto label_286344;
        case 0x2863ccu: goto label_2863cc;
        case 0x2863e4u: goto label_2863e4;
        case 0x2863fcu: goto label_2863fc;
        default: break;
    }

    ctx->pc = 0x286120u;

    // 0x286120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x286120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x286124: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x286124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x286128: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x286128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28612c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28612cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x286130: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x286130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x286134: 0x3e00008  jr          $ra
    ctx->pc = 0x286134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28613Cu;
    // 0x28613c: 0x0  nop
    ctx->pc = 0x28613cu;
    // NOP
    // 0x286140: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x286140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x286144: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x286144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x286148: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x286148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28614c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28614cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x286150: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x286150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x286154: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x286154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x286158: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x286158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28615c: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x28615cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x286160: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x286160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x286164: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x286164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x286168: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x286168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28616c: 0xc0911dc  jal         func_244770
    ctx->pc = 0x28616Cu;
    SET_GPR_U32(ctx, 31, 0x286174u);
    ctx->pc = 0x244770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244770u, 0x28616Cu, 0x286174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286174u;
label_286174:
    // 0x286174: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x286174u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x286178: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x286178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28617c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x28617cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x286180: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x286180u;
    {
        const bool branch_taken_0x286180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x286180) {
            ctx->pc = 0x286198u;
            goto label_286198;
        }
    }
    ctx->pc = 0x286188u;
    // 0x286188: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x286188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28618c: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x28618cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x286190: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x286190u;
    {
        const bool branch_taken_0x286190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286190) {
            ctx->pc = 0x2861A0u;
            goto label_2861a0;
        }
    }
    ctx->pc = 0x286198u;
label_286198:
    // 0x286198: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x286198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28619c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x28619cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2861a0:
    // 0x2861a0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2861a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2861a4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2861a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2861a8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2861a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2861ac: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x2861acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x2861b0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2861b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2861b4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2861b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2861b8: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x2861b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x2861bc: 0x10100011  beq         $zero, $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2861BCu;
    {
        const bool branch_taken_0x2861bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x2861bc) {
            ctx->pc = 0x286204u;
            goto label_286204;
        }
    }
    ctx->pc = 0x2861C4u;
    // 0x2861c4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2861c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2861c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2861c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2861cc: 0x24050419  addiu       $a1, $zero, 0x419
    ctx->pc = 0x2861ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1049));
    // 0x2861d0: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x2861d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2861d4: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2861D4u;
    SET_GPR_U32(ctx, 31, 0x2861DCu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2861D4u, 0x2861DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2861DCu;
label_2861dc:
    // 0x2861dc: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2861dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2861e0: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x2861e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
    // 0x2861e4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2861e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2861e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2861e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2861ec: 0x2405041a  addiu       $a1, $zero, 0x41A
    ctx->pc = 0x2861ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1050));
    // 0x2861f0: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x2861f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2861f4: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2861F4u;
    SET_GPR_U32(ctx, 31, 0x2861FCu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2861F4u, 0x2861FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2861FCu;
label_2861fc:
    // 0x2861fc: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2861fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x286200: 0xac62003c  sw          $v0, 0x3C($v1)
    ctx->pc = 0x286200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
label_286204:
    // 0x286204: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x286204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x286208: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x286208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x28620c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28620cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286210: 0xc085538  jal         func_2154E0
    ctx->pc = 0x286210u;
    SET_GPR_U32(ctx, 31, 0x286218u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x286210u, 0x286218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286218u;
label_286218:
    // 0x286218: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x286218u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28621c: 0x10130032  beq         $zero, $s3, . + 4 + (0x32 << 2)
    ctx->pc = 0x28621Cu;
    {
        const bool branch_taken_0x28621c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 19));
        if (branch_taken_0x28621c) {
            ctx->pc = 0x2862E8u;
            goto label_2862e8;
        }
    }
    ctx->pc = 0x286224u;
    // 0x286224: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x286224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x286228: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x286228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x28622c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28622Cu;
    {
        const bool branch_taken_0x28622c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28622c) {
            ctx->pc = 0x286254u;
            goto label_286254;
        }
    }
    ctx->pc = 0x286234u;
    // 0x286234: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x286234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_286238:
    // 0x286238: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x286238u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x28623c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28623cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x286240: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x286240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x286244: 0x0  nop
    ctx->pc = 0x286244u;
    // NOP
    // 0x286248: 0x0  nop
    ctx->pc = 0x286248u;
    // NOP
    // 0x28624c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28624Cu;
    {
        const bool branch_taken_0x28624c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28624c) {
            ctx->pc = 0x286238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286238;
        }
    }
    ctx->pc = 0x286254u;
label_286254:
    // 0x286254: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x286254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x286258: 0x2484d430  addiu       $a0, $a0, -0x2BD0
    ctx->pc = 0x286258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956080));
    // 0x28625c: 0x27a30068  addiu       $v1, $sp, 0x68
    ctx->pc = 0x28625cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x286260: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x286260u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4ED430u));
    // 0x286264: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x286264u;
    { uint32_t bits = FAST_READ32(0x4ED438u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286268: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x286268u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x28626c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x28626cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x286270: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x286270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x286274: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x286274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x286278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28627c: 0x0  nop
    ctx->pc = 0x28627cu;
    // NOP
    // 0x286280: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x286280u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x286284: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x286284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x286288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28628c: 0x0  nop
    ctx->pc = 0x28628cu;
    // NOP
    // 0x286290: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x286290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x286294: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x286294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x286298: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x286298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28629c: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x28629cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2862a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2862a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2862a4: 0x0  nop
    ctx->pc = 0x2862a4u;
    // NOP
    // 0x2862a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2862a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2862ac: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2862acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2862b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2862b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2862b4: 0x0  nop
    ctx->pc = 0x2862b4u;
    // NOP
    // 0x2862b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2862b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2862bc: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2862bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2862c0: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2862c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2862c4: 0x27a2008c  addiu       $v0, $sp, 0x8C
    ctx->pc = 0x2862c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x2862c8: 0xc780a284  lwc1        $f0, -0x5D7C($gp)
    ctx->pc = 0x2862c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2862cc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2862ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2862d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2862d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2862d4: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x2862d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2862d8: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x2862d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2862dc: 0x27a7008c  addiu       $a3, $sp, 0x8C
    ctx->pc = 0x2862dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x2862e0: 0xc0a43e4  jal         func_290F90
    ctx->pc = 0x2862E0u;
    SET_GPR_U32(ctx, 31, 0x2862E8u);
    ctx->pc = 0x290F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F90u, 0x2862E0u, 0x2862E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2862E8u;
label_2862e8:
    // 0x2862e8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2862e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2862ec: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2862ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2862f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2862f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2862f4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2862F4u;
    SET_GPR_U32(ctx, 31, 0x2862FCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2862F4u, 0x2862FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2862FCu;
label_2862fc:
    // 0x2862fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2862fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286300: 0x1012000c  beq         $zero, $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x286300u;
    {
        const bool branch_taken_0x286300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x286300) {
            ctx->pc = 0x286334u;
            goto label_286334;
        }
    }
    ctx->pc = 0x286308u;
    // 0x286308: 0x27a20088  addiu       $v0, $sp, 0x88
    ctx->pc = 0x286308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x28630c: 0xc780a288  lwc1        $f0, -0x5D78($gp)
    ctx->pc = 0x28630cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286310: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x286310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x286314: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x286314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x286318: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x286318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x28631c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x28631cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x286320: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x286320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x286324: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x286324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286328: 0x27a70088  addiu       $a3, $sp, 0x88
    ctx->pc = 0x286328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x28632c: 0xc0a4848  jal         func_292120
    ctx->pc = 0x28632Cu;
    SET_GPR_U32(ctx, 31, 0x286334u);
    ctx->pc = 0x292120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292120u, 0x28632Cu, 0x286334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286334u;
label_286334:
    // 0x286334: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x286334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x286338: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x286338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28633c: 0xc0a1904  jal         func_286410
    ctx->pc = 0x28633Cu;
    SET_GPR_U32(ctx, 31, 0x286344u);
    ctx->pc = 0x286410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286410u, 0x28633Cu, 0x286344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286344u;
label_286344:
    // 0x286344: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x286344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286348: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x286348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28634c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28634cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x286350: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x286350u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286354: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x286354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286358: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x286358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28635c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28635cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286360: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x286360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x286364: 0x3e00008  jr          $ra
    ctx->pc = 0x286364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28636Cu;
    // 0x28636c: 0x0  nop
    ctx->pc = 0x28636cu;
    // NOP
    // 0x286370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x286370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x286374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x286374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x286378: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x286378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28637c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28637cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x286380: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x286380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286384: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x286384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x286388: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x286388u;
    {
        const bool branch_taken_0x286388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x286388) {
            ctx->pc = 0x2863ECu;
            goto label_2863ec;
        }
    }
    ctx->pc = 0x286390u;
    // 0x286390: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x286390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x286394: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x286394u;
    {
        const bool branch_taken_0x286394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x286394) {
            ctx->pc = 0x2863D4u;
            goto label_2863d4;
        }
    }
    ctx->pc = 0x28639Cu;
    // 0x28639c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28639cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2863a0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2863A0u;
    {
        const bool branch_taken_0x2863a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2863a0) {
            ctx->pc = 0x2863BCu;
            goto label_2863bc;
        }
    }
    ctx->pc = 0x2863A8u;
    // 0x2863a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2863a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2863ac: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2863ACu;
    {
        const bool branch_taken_0x2863ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2863ac) {
            ctx->pc = 0x2863BCu;
            goto label_2863bc;
        }
    }
    ctx->pc = 0x2863B4u;
    // 0x2863b4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2863B4u;
    {
        const bool branch_taken_0x2863b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2863b4) {
            ctx->pc = 0x2863FCu;
            goto label_2863fc;
        }
    }
    ctx->pc = 0x2863BCu;
label_2863bc:
    // 0x2863bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2863bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2863c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2863c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2863c4: 0xc0a1904  jal         func_286410
    ctx->pc = 0x2863C4u;
    SET_GPR_U32(ctx, 31, 0x2863CCu);
    ctx->pc = 0x286410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286410u, 0x2863C4u, 0x2863CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2863CCu;
label_2863cc:
    // 0x2863cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2863CCu;
    {
        const bool branch_taken_0x2863cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2863cc) {
            ctx->pc = 0x2863FCu;
            goto label_2863fc;
        }
    }
    ctx->pc = 0x2863D4u;
label_2863d4:
    // 0x2863d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2863d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2863d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2863d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2863dc: 0xc0a1904  jal         func_286410
    ctx->pc = 0x2863DCu;
    SET_GPR_U32(ctx, 31, 0x2863E4u);
    ctx->pc = 0x286410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286410u, 0x2863DCu, 0x2863E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2863E4u;
label_2863e4:
    // 0x2863e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2863E4u;
    {
        const bool branch_taken_0x2863e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2863e4) {
            ctx->pc = 0x2863FCu;
            goto label_2863fc;
        }
    }
    ctx->pc = 0x2863ECu;
label_2863ec:
    // 0x2863ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2863ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2863f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2863f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2863f4: 0xc0a1904  jal         func_286410
    ctx->pc = 0x2863F4u;
    SET_GPR_U32(ctx, 31, 0x2863FCu);
    ctx->pc = 0x286410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286410u, 0x2863F4u, 0x2863FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2863FCu;
label_2863fc:
    // 0x2863fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2863fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x286400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286404: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x286404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x286408: 0x3e00008  jr          $ra
    ctx->pc = 0x286408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286410u;
}
