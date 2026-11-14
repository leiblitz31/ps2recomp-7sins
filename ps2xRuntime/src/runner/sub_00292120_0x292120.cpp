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

// Function: sub_00292120
// Address: 0x292120 - 0x292a90
void sub_00292120_0x292120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292120_0x292120");
#endif

    switch (ctx->pc) {
        case 0x2921bcu: goto label_2921bc;
        case 0x2921e8u: goto label_2921e8;
        case 0x292204u: goto label_292204;
        case 0x29221cu: goto label_29221c;
        case 0x292230u: goto label_292230;
        case 0x29223cu: goto label_29223c;
        case 0x292250u: goto label_292250;
        case 0x292260u: goto label_292260;
        case 0x29235cu: goto label_29235c;
        case 0x292450u: goto label_292450;
        case 0x292548u: goto label_292548;
        case 0x292638u: goto label_292638;
        case 0x292730u: goto label_292730;
        case 0x292824u: goto label_292824;
        default: break;
    }

    ctx->pc = 0x292120u;

    // 0x292120: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x292120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x292124: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x292124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x292128: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x292128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x29212c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x29212cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x292130: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x292130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x292134: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x292134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x292138: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x292138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29213c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29213cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x292140: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x292140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x292144: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x292144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x292148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x292148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29214c: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x29214cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x292150: 0xafa50120  sw          $a1, 0x120($sp)
    ctx->pc = 0x292150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
    // 0x292154: 0xafa60130  sw          $a2, 0x130($sp)
    ctx->pc = 0x292154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 6));
    // 0x292158: 0xafa70140  sw          $a3, 0x140($sp)
    ctx->pc = 0x292158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 7));
    // 0x29215c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x29215cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x292160: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x292160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x292164: 0xac64006c  sw          $a0, 0x6C($v1)
    ctx->pc = 0x292164u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 4));
    // 0x292168: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x292168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x29216c: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x29216cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x292170: 0xac640070  sw          $a0, 0x70($v1)
    ctx->pc = 0x292170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 4));
    // 0x292174: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x292174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x292178: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x292178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x29217c: 0xac640074  sw          $a0, 0x74($v1)
    ctx->pc = 0x29217cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 4));
    // 0x292180: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x292180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x292184: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x292184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x292188: 0x8c850070  lw          $a1, 0x70($a0)
    ctx->pc = 0x292188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x29218c: 0x8c640074  lw          $a0, 0x74($v1)
    ctx->pc = 0x29218cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x292190: 0xa41818  mult        $v1, $a1, $a0
    ctx->pc = 0x292190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x292194: 0xafa3010c  sw          $v1, 0x10C($sp)
    ctx->pc = 0x292194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 3));
    // 0x292198: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x292198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x29219c: 0x8c640064  lw          $a0, 0x64($v1)
    ctx->pc = 0x29219cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x2921a0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2921A0u;
    {
        const bool branch_taken_0x2921a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2921a0) {
            ctx->pc = 0x2921C8u;
            goto label_2921c8;
        }
    }
    ctx->pc = 0x2921A8u;
    // 0x2921a8: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x2921a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2921ac: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x2921acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x2921b0: 0x8c650064  lw          $a1, 0x64($v1)
    ctx->pc = 0x2921b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x2921b4: 0xc0a4bc8  jal         func_292F20
    ctx->pc = 0x2921B4u;
    SET_GPR_U32(ctx, 31, 0x2921BCu);
    ctx->pc = 0x292F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F20u, 0x2921B4u, 0x2921BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2921BCu;
label_2921bc:
    // 0x2921bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2921bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2921c0: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x2921c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2921c4: 0xac600064  sw          $zero, 0x64($v1)
    ctx->pc = 0x2921c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
label_2921c8:
    // 0x2921c8: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x2921c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x2921cc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2921ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2921d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2921d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2921d4: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x2921d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2921d8: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x2921d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x2921dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2921dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2921e0: 0xc0a4b98  jal         func_292E60
    ctx->pc = 0x2921E0u;
    SET_GPR_U32(ctx, 31, 0x2921E8u);
    ctx->pc = 0x292E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292E60u, 0x2921E0u, 0x2921E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2921E8u;
label_2921e8:
    // 0x2921e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2921e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2921ec: 0x8fb10110  lw          $s1, 0x110($sp)
    ctx->pc = 0x2921ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2921f0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2921f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x2921f4: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x2921f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2921f8: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x2921f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x2921fc: 0xc0a4b80  jal         func_292E00
    ctx->pc = 0x2921FCu;
    SET_GPR_U32(ctx, 31, 0x292204u);
    ctx->pc = 0x292E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292E00u, 0x2921FCu, 0x292204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292204u;
label_292204:
    // 0x292204: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x292204u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292208: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x292208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x29220c: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x29220cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x292210: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x292210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x292214: 0xc0a4abc  jal         func_292AF0
    ctx->pc = 0x292214u;
    SET_GPR_U32(ctx, 31, 0x29221Cu);
    ctx->pc = 0x292AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292AF0u, 0x292214u, 0x29221Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29221Cu;
label_29221c:
    // 0x29221c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29221cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292220: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x292220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    // 0x292224: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x292224u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292228: 0x10000202  b           . + 4 + (0x202 << 2)
    ctx->pc = 0x292228u;
    {
        const bool branch_taken_0x292228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292228) {
            ctx->pc = 0x292A34u;
            goto label_292a34;
        }
    }
    ctx->pc = 0x292230u;
label_292230:
    // 0x292230: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x292230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292234: 0x100001f8  b           . + 4 + (0x1F8 << 2)
    ctx->pc = 0x292234u;
    {
        const bool branch_taken_0x292234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292234) {
            ctx->pc = 0x292A18u;
            goto label_292a18;
        }
    }
    ctx->pc = 0x29223Cu;
label_29223c:
    // 0x29223c: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x29223cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x292240: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x292240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x292244: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x292244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x292248: 0xc0a4aa4  jal         func_292A90
    ctx->pc = 0x292248u;
    SET_GPR_U32(ctx, 31, 0x292250u);
    ctx->pc = 0x292A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292A90u, 0x292248u, 0x292250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292250u;
label_292250:
    // 0x292250: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x292250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292254: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x292254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x292258: 0xc052608  jal         func_149820
    ctx->pc = 0x292258u;
    SET_GPR_U32(ctx, 31, 0x292260u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x292258u, 0x292260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292260u;
label_292260:
    // 0x292260: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x292260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x292264: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x292264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x292268: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x292268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29226c: 0x28040  sll         $s0, $v0, 1
    ctx->pc = 0x29226cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x292270: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x292270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x292274: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x292274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x292278: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x292278u;
    {
        const bool branch_taken_0x292278 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x292278) {
            ctx->pc = 0x292294u;
            goto label_292294;
        }
    }
    ctx->pc = 0x292280u;
    // 0x292280: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x292280u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292284: 0x0  nop
    ctx->pc = 0x292284u;
    // NOP
    // 0x292288: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x292288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x29228c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29228Cu;
    {
        const bool branch_taken_0x29228c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29228c) {
            ctx->pc = 0x2922B0u;
            goto label_2922b0;
        }
    }
    ctx->pc = 0x292294u;
label_292294:
    // 0x292294: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x292294u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x292298: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x292298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x29229c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29229cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2922a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2922a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2922a4: 0x0  nop
    ctx->pc = 0x2922a4u;
    // NOP
    // 0x2922a8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2922a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2922ac: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2922acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2922b0:
    // 0x2922b0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2922b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2922b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2922b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2922b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2922b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2922bc: 0x0  nop
    ctx->pc = 0x2922bcu;
    // NOP
    // 0x2922c0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2922c0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2922c4: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2922c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2922c8: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2922c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2922cc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2922ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2922d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2922d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2922d4: 0x0  nop
    ctx->pc = 0x2922d4u;
    // NOP
    // 0x2922d8: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x2922d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2922dc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2922dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2922e0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2922e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2922e4: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2922E4u;
    {
        const bool branch_taken_0x2922e4 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x2922e4) {
            ctx->pc = 0x292300u;
            goto label_292300;
        }
    }
    ctx->pc = 0x2922ECu;
    // 0x2922ec: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2922ecu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2922f0: 0x0  nop
    ctx->pc = 0x2922f0u;
    // NOP
    // 0x2922f4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2922f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2922f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2922F8u;
    {
        const bool branch_taken_0x2922f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2922f8) {
            ctx->pc = 0x29231Cu;
            goto label_29231c;
        }
    }
    ctx->pc = 0x292300u;
label_292300:
    // 0x292300: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x292300u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x292304: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x292304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x292308: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x292308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29230c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29230cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292310: 0x0  nop
    ctx->pc = 0x292310u;
    // NOP
    // 0x292314: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x292314u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x292318: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x292318u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_29231c:
    // 0x29231c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x29231cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x292320: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x292320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x292324: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x292324u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292328: 0x0  nop
    ctx->pc = 0x292328u;
    // NOP
    // 0x29232c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x29232cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x292330: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x292330u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x292334: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x292334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x292338: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x292338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x29233c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x29233cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x292340: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x292340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x292344: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x292344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x292348: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x292348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x29234c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x29234cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292350: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x292350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x292354: 0xc041d58  jal         func_107560
    ctx->pc = 0x292354u;
    SET_GPR_U32(ctx, 31, 0x29235Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x292354u, 0x29235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29235Cu;
label_29235c:
    // 0x29235c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x29235cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x292360: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x292360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x292364: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x292364u;
    {
        const bool branch_taken_0x292364 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x292364) {
            ctx->pc = 0x292380u;
            goto label_292380;
        }
    }
    ctx->pc = 0x29236Cu;
    // 0x29236c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x29236cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292370: 0x0  nop
    ctx->pc = 0x292370u;
    // NOP
    // 0x292374: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x292374u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x292378: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x292378u;
    {
        const bool branch_taken_0x292378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292378) {
            ctx->pc = 0x29239Cu;
            goto label_29239c;
        }
    }
    ctx->pc = 0x292380u;
label_292380:
    // 0x292380: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x292380u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x292384: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x292384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x292388: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x292388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29238c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29238cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292390: 0x0  nop
    ctx->pc = 0x292390u;
    // NOP
    // 0x292394: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x292394u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x292398: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x292398u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_29239c:
    // 0x29239c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x29239cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2923a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2923a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2923a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2923a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2923a8: 0x0  nop
    ctx->pc = 0x2923a8u;
    // NOP
    // 0x2923ac: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2923acu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2923b0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2923b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2923b4: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2923b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2923b8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2923b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2923bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2923bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2923c0: 0x0  nop
    ctx->pc = 0x2923c0u;
    // NOP
    // 0x2923c4: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2923c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x2923c8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x2923c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2923cc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2923CCu;
    {
        const bool branch_taken_0x2923cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2923cc) {
            ctx->pc = 0x2923E8u;
            goto label_2923e8;
        }
    }
    ctx->pc = 0x2923D4u;
    // 0x2923d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2923d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2923d8: 0x0  nop
    ctx->pc = 0x2923d8u;
    // NOP
    // 0x2923dc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2923dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2923e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2923E0u;
    {
        const bool branch_taken_0x2923e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2923e0) {
            ctx->pc = 0x292404u;
            goto label_292404;
        }
    }
    ctx->pc = 0x2923E8u;
label_2923e8:
    // 0x2923e8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2923e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2923ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2923ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2923f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2923f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2923f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2923f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2923f8: 0x0  nop
    ctx->pc = 0x2923f8u;
    // NOP
    // 0x2923fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2923fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x292400: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x292400u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_292404:
    // 0x292404: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x292404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x292408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x292408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29240c: 0x0  nop
    ctx->pc = 0x29240cu;
    // NOP
    // 0x292410: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x292410u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x292414: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x292414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x292418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x292418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29241c: 0x0  nop
    ctx->pc = 0x29241cu;
    // NOP
    // 0x292420: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x292420u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x292424: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x292424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x292428: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x292428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x29242c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x29242cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x292430: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x292430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x292434: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x292434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292438: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x292438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29243c: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x29243cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x292440: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x292440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292444: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x292444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x292448: 0xc041d58  jal         func_107560
    ctx->pc = 0x292448u;
    SET_GPR_U32(ctx, 31, 0x292450u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x292448u, 0x292450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292450u;
label_292450:
    // 0x292450: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x292450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x292454: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x292454u;
    {
        const bool branch_taken_0x292454 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x292454) {
            ctx->pc = 0x292470u;
            goto label_292470;
        }
    }
    ctx->pc = 0x29245Cu;
    // 0x29245c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29245cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292460: 0x0  nop
    ctx->pc = 0x292460u;
    // NOP
    // 0x292464: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x292464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x292468: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x292468u;
    {
        const bool branch_taken_0x292468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292468) {
            ctx->pc = 0x29248Cu;
            goto label_29248c;
        }
    }
    ctx->pc = 0x292470u;
label_292470:
    // 0x292470: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x292470u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x292474: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x292474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x292478: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x292478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29247c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29247cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292480: 0x0  nop
    ctx->pc = 0x292480u;
    // NOP
    // 0x292484: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x292484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x292488: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x292488u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_29248c:
    // 0x29248c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x29248cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x292490: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x292490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292494: 0x0  nop
    ctx->pc = 0x292494u;
    // NOP
    // 0x292498: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x292498u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29249c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x29249cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2924a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2924a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2924a4: 0x0  nop
    ctx->pc = 0x2924a4u;
    // NOP
    // 0x2924a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2924a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2924ac: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2924acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2924b0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2924b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2924b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2924b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2924b8: 0x0  nop
    ctx->pc = 0x2924b8u;
    // NOP
    // 0x2924bc: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2924bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2924c0: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x2924c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2924c4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2924C4u;
    {
        const bool branch_taken_0x2924c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2924c4) {
            ctx->pc = 0x2924E0u;
            goto label_2924e0;
        }
    }
    ctx->pc = 0x2924CCu;
    // 0x2924cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2924ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2924d0: 0x0  nop
    ctx->pc = 0x2924d0u;
    // NOP
    // 0x2924d4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2924d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2924d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2924D8u;
    {
        const bool branch_taken_0x2924d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2924d8) {
            ctx->pc = 0x2924FCu;
            goto label_2924fc;
        }
    }
    ctx->pc = 0x2924E0u;
label_2924e0:
    // 0x2924e0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2924e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2924e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2924e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2924e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2924e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2924ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2924ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2924f0: 0x0  nop
    ctx->pc = 0x2924f0u;
    // NOP
    // 0x2924f4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2924f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2924f8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2924f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2924fc:
    // 0x2924fc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2924fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x292500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x292500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292504: 0x0  nop
    ctx->pc = 0x292504u;
    // NOP
    // 0x292508: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x292508u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29250c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x29250cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x292510: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x292510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292514: 0x0  nop
    ctx->pc = 0x292514u;
    // NOP
    // 0x292518: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x292518u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29251c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x29251cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x292520: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x292520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x292524: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x292524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x292528: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x292528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x29252c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29252cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292530: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x292530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x292534: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x292534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x292538: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x292538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29253c: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x29253cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x292540: 0xc041d58  jal         func_107560
    ctx->pc = 0x292540u;
    SET_GPR_U32(ctx, 31, 0x292548u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x292540u, 0x292548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292548u;
label_292548:
    // 0x292548: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x292548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x29254c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x29254cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x292550: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x292550u;
    {
        const bool branch_taken_0x292550 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x292550) {
            ctx->pc = 0x29256Cu;
            goto label_29256c;
        }
    }
    ctx->pc = 0x292558u;
    // 0x292558: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x292558u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29255c: 0x0  nop
    ctx->pc = 0x29255cu;
    // NOP
    // 0x292560: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x292560u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x292564: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x292564u;
    {
        const bool branch_taken_0x292564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292564) {
            ctx->pc = 0x292588u;
            goto label_292588;
        }
    }
    ctx->pc = 0x29256Cu;
label_29256c:
    // 0x29256c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x29256cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x292570: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x292570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x292574: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x292574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x292578: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x292578u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29257c: 0x0  nop
    ctx->pc = 0x29257cu;
    // NOP
    // 0x292580: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x292580u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x292584: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x292584u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_292588:
    // 0x292588: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x292588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x29258c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29258cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x292590: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x292590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292594: 0x0  nop
    ctx->pc = 0x292594u;
    // NOP
    // 0x292598: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x292598u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x29259c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x29259cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2925a0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2925a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2925a4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2925a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2925a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2925a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2925ac: 0x0  nop
    ctx->pc = 0x2925acu;
    // NOP
    // 0x2925b0: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2925b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2925b4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2925b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2925b8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2925b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2925bc: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2925BCu;
    {
        const bool branch_taken_0x2925bc = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x2925bc) {
            ctx->pc = 0x2925D8u;
            goto label_2925d8;
        }
    }
    ctx->pc = 0x2925C4u;
    // 0x2925c4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2925c4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2925c8: 0x0  nop
    ctx->pc = 0x2925c8u;
    // NOP
    // 0x2925cc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2925ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2925d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2925D0u;
    {
        const bool branch_taken_0x2925d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2925d0) {
            ctx->pc = 0x2925F4u;
            goto label_2925f4;
        }
    }
    ctx->pc = 0x2925D8u;
label_2925d8:
    // 0x2925d8: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x2925d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x2925dc: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x2925dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x2925e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2925e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2925e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2925e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2925e8: 0x0  nop
    ctx->pc = 0x2925e8u;
    // NOP
    // 0x2925ec: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2925ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2925f0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2925f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2925f4:
    // 0x2925f4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2925f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2925f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2925f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2925fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2925fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292600: 0x0  nop
    ctx->pc = 0x292600u;
    // NOP
    // 0x292604: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x292604u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x292608: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x292608u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x29260c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x29260cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x292610: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x292610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x292614: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x292614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x292618: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x292618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x29261c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29261cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292620: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x292620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x292624: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x292624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x292628: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x292628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29262c: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x29262cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x292630: 0xc041d58  jal         func_107560
    ctx->pc = 0x292630u;
    SET_GPR_U32(ctx, 31, 0x292638u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x292630u, 0x292638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292638u;
label_292638:
    // 0x292638: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x292638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29263c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29263Cu;
    {
        const bool branch_taken_0x29263c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x29263c) {
            ctx->pc = 0x292658u;
            goto label_292658;
        }
    }
    ctx->pc = 0x292644u;
    // 0x292644: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x292644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292648: 0x0  nop
    ctx->pc = 0x292648u;
    // NOP
    // 0x29264c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29264cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x292650: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x292650u;
    {
        const bool branch_taken_0x292650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292650) {
            ctx->pc = 0x292674u;
            goto label_292674;
        }
    }
    ctx->pc = 0x292658u;
label_292658:
    // 0x292658: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x292658u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x29265c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29265cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x292660: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x292660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x292664: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x292664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292668: 0x0  nop
    ctx->pc = 0x292668u;
    // NOP
    // 0x29266c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29266cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x292670: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x292670u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_292674:
    // 0x292674: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x292674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x292678: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x292678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29267c: 0x0  nop
    ctx->pc = 0x29267cu;
    // NOP
    // 0x292680: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x292680u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x292684: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x292684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x292688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x292688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29268c: 0x0  nop
    ctx->pc = 0x29268cu;
    // NOP
    // 0x292690: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x292690u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x292694: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x292694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x292698: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x292698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x29269c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29269cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2926a0: 0x0  nop
    ctx->pc = 0x2926a0u;
    // NOP
    // 0x2926a4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2926a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2926a8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x2926a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2926ac: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2926ACu;
    {
        const bool branch_taken_0x2926ac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2926ac) {
            ctx->pc = 0x2926C8u;
            goto label_2926c8;
        }
    }
    ctx->pc = 0x2926B4u;
    // 0x2926b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2926b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2926b8: 0x0  nop
    ctx->pc = 0x2926b8u;
    // NOP
    // 0x2926bc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2926bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2926c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2926C0u;
    {
        const bool branch_taken_0x2926c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2926c0) {
            ctx->pc = 0x2926E4u;
            goto label_2926e4;
        }
    }
    ctx->pc = 0x2926C8u;
label_2926c8:
    // 0x2926c8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2926c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2926cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2926ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2926d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2926d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2926d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2926d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2926d8: 0x0  nop
    ctx->pc = 0x2926d8u;
    // NOP
    // 0x2926dc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2926dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2926e0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2926e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2926e4:
    // 0x2926e4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2926e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2926e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2926e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2926ec: 0x0  nop
    ctx->pc = 0x2926ecu;
    // NOP
    // 0x2926f0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2926f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2926f4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2926f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2926f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2926f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2926fc: 0x0  nop
    ctx->pc = 0x2926fcu;
    // NOP
    // 0x292700: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x292700u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x292704: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x292704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x292708: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x292708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x29270c: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x29270cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x292710: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x292710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x292714: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x292714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292718: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x292718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29271c: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x29271cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x292720: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x292720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292724: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x292724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x292728: 0xc041d58  jal         func_107560
    ctx->pc = 0x292728u;
    SET_GPR_U32(ctx, 31, 0x292730u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x292728u, 0x292730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292730u;
label_292730:
    // 0x292730: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x292730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x292734: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x292734u;
    {
        const bool branch_taken_0x292734 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x292734) {
            ctx->pc = 0x292750u;
            goto label_292750;
        }
    }
    ctx->pc = 0x29273Cu;
    // 0x29273c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29273cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292740: 0x0  nop
    ctx->pc = 0x292740u;
    // NOP
    // 0x292744: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x292744u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x292748: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x292748u;
    {
        const bool branch_taken_0x292748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292748) {
            ctx->pc = 0x29276Cu;
            goto label_29276c;
        }
    }
    ctx->pc = 0x292750u;
label_292750:
    // 0x292750: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x292750u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x292754: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x292754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x292758: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x292758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29275c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29275cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292760: 0x0  nop
    ctx->pc = 0x292760u;
    // NOP
    // 0x292764: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x292764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x292768: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x292768u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_29276c:
    // 0x29276c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x29276cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x292770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x292770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292774: 0x0  nop
    ctx->pc = 0x292774u;
    // NOP
    // 0x292778: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x292778u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29277c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x29277cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x292780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x292780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292784: 0x0  nop
    ctx->pc = 0x292784u;
    // NOP
    // 0x292788: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x292788u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29278c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x29278cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x292790: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x292790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x292794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x292794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292798: 0x0  nop
    ctx->pc = 0x292798u;
    // NOP
    // 0x29279c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x29279cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2927a0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2927a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2927a4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2927a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2927a8: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2927A8u;
    {
        const bool branch_taken_0x2927a8 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x2927a8) {
            ctx->pc = 0x2927C4u;
            goto label_2927c4;
        }
    }
    ctx->pc = 0x2927B0u;
    // 0x2927b0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2927b0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2927b4: 0x0  nop
    ctx->pc = 0x2927b4u;
    // NOP
    // 0x2927b8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2927b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2927bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2927BCu;
    {
        const bool branch_taken_0x2927bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2927bc) {
            ctx->pc = 0x2927E0u;
            goto label_2927e0;
        }
    }
    ctx->pc = 0x2927C4u;
label_2927c4:
    // 0x2927c4: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x2927c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x2927c8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x2927c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x2927cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2927ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2927d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2927d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2927d4: 0x0  nop
    ctx->pc = 0x2927d4u;
    // NOP
    // 0x2927d8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2927d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2927dc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2927dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2927e0:
    // 0x2927e0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2927e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2927e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2927e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2927e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2927e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2927ec: 0x0  nop
    ctx->pc = 0x2927ecu;
    // NOP
    // 0x2927f0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2927f0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2927f4: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2927f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2927f8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2927f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2927fc: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2927fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x292800: 0x26030005  addiu       $v1, $s0, 0x5
    ctx->pc = 0x292800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x292804: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x292804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x292808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x292808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29280c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29280cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x292810: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x292810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x292814: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x292814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292818: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x292818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x29281c: 0xc041d58  jal         func_107560
    ctx->pc = 0x29281Cu;
    SET_GPR_U32(ctx, 31, 0x292824u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x29281Cu, 0x292824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292824u;
label_292824:
    // 0x292824: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x292824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x292828: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x292828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x29282c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x29282cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x292830: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x292830u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x292834: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x292834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x292838: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x292838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29283c: 0x247e000c  addiu       $fp, $v1, 0xC
    ctx->pc = 0x29283cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x292840: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x292840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x292844: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x292844u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x292848: 0xa3c30000  sb          $v1, 0x0($fp)
    ctx->pc = 0x292848u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x29284c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x29284cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x292850: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x292850u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x292854: 0xa3c30001  sb          $v1, 0x1($fp)
    ctx->pc = 0x292854u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x292858: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x292858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x29285c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x29285cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x292860: 0xa3c30002  sb          $v1, 0x2($fp)
    ctx->pc = 0x292860u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x292864: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x292864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x292868: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x292868u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x29286c: 0xa3c30003  sb          $v1, 0x3($fp)
    ctx->pc = 0x29286cu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x292870: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x292870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x292874: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x292874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x292878: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x292878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x29287c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29287cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x292880: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x292880u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x292884: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x292884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x292888: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x292888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29288c: 0x2477000c  addiu       $s7, $v1, 0xC
    ctx->pc = 0x29288cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x292890: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x292890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x292894: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x292894u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x292898: 0xa2e30000  sb          $v1, 0x0($s7)
    ctx->pc = 0x292898u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x29289c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x29289cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2928a0: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2928a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2928a4: 0xa2e30001  sb          $v1, 0x1($s7)
    ctx->pc = 0x2928a4u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2928a8: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x2928a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2928ac: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2928acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2928b0: 0xa2e30002  sb          $v1, 0x2($s7)
    ctx->pc = 0x2928b0u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2928b4: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x2928b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2928b8: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x2928b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x2928bc: 0xa2e30003  sb          $v1, 0x3($s7)
    ctx->pc = 0x2928bcu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2928c0: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2928c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2928c4: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x2928c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2928c8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2928c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2928cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2928ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2928d0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2928d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2928d4: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x2928d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x2928d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2928d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2928dc: 0x2476000c  addiu       $s6, $v1, 0xC
    ctx->pc = 0x2928dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2928e0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x2928e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2928e4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2928e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2928e8: 0xa2c30000  sb          $v1, 0x0($s6)
    ctx->pc = 0x2928e8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2928ec: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x2928ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2928f0: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2928f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2928f4: 0xa2c30001  sb          $v1, 0x1($s6)
    ctx->pc = 0x2928f4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2928f8: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x2928f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2928fc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2928fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x292900: 0xa2c30002  sb          $v1, 0x2($s6)
    ctx->pc = 0x292900u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x292904: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x292904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x292908: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x292908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x29290c: 0xa2c30003  sb          $v1, 0x3($s6)
    ctx->pc = 0x29290cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x292910: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x292910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x292914: 0x26040003  addiu       $a0, $s0, 0x3
    ctx->pc = 0x292914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x292918: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x292918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x29291c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29291cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x292920: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x292920u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x292924: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x292924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x292928: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x292928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29292c: 0x2475000c  addiu       $s5, $v1, 0xC
    ctx->pc = 0x29292cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x292930: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x292930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x292934: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x292934u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x292938: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x292938u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x29293c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x29293cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x292940: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x292940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x292944: 0xa2a30001  sb          $v1, 0x1($s5)
    ctx->pc = 0x292944u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x292948: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x292948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x29294c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x29294cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x292950: 0xa2a30002  sb          $v1, 0x2($s5)
    ctx->pc = 0x292950u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x292954: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x292954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x292958: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x292958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x29295c: 0xa2a30003  sb          $v1, 0x3($s5)
    ctx->pc = 0x29295cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x292960: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x292960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x292964: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x292964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x292968: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x292968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x29296c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29296cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x292970: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x292970u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x292974: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x292974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x292978: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x292978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29297c: 0x2474000c  addiu       $s4, $v1, 0xC
    ctx->pc = 0x29297cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x292980: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x292980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x292984: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x292984u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x292988: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x292988u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x29298c: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x29298cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x292990: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x292990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x292994: 0xa2830001  sb          $v1, 0x1($s4)
    ctx->pc = 0x292994u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x292998: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x292998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x29299c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x29299cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2929a0: 0xa2830002  sb          $v1, 0x2($s4)
    ctx->pc = 0x2929a0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2929a4: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x2929a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2929a8: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x2929a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x2929ac: 0xa2830003  sb          $v1, 0x3($s4)
    ctx->pc = 0x2929acu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2929b0: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2929b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2929b4: 0x26040005  addiu       $a0, $s0, 0x5
    ctx->pc = 0x2929b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x2929b8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2929b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2929bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2929bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2929c0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2929c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2929c4: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x2929c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x2929c8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2929c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2929cc: 0x2485000c  addiu       $a1, $a0, 0xC
    ctx->pc = 0x2929ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2929d0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2929d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2929d4: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x2929d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2929d8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2929d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2929dc: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x2929dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2929e0: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x2929e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2929e4: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x2929e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2929e8: 0xa2630001  sb          $v1, 0x1($s3)
    ctx->pc = 0x2929e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2929ec: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x2929ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2929f0: 0x90660002  lbu         $a2, 0x2($v1)
    ctx->pc = 0x2929f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2929f4: 0xa2660002  sb          $a2, 0x2($s3)
    ctx->pc = 0x2929f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x2929f8: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x2929f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2929fc: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x2929fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x292a00: 0xa2630003  sb          $v1, 0x3($s3)
    ctx->pc = 0x292a00u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x292a04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x292a04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x292a08: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x292a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x292a0c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x292a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x292a10: 0xafa40108  sw          $a0, 0x108($sp)
    ctx->pc = 0x292a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
    // 0x292a14: 0xafa40104  sw          $a0, 0x104($sp)
    ctx->pc = 0x292a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 4));
label_292a18:
    // 0x292a18: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x292a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x292a1c: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x292a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x292a20: 0x223202b  sltu        $a0, $s1, $v1
    ctx->pc = 0x292a20u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x292a24: 0x1480fe05  bnez        $a0, . + 4 + (-0x1FB << 2)
    ctx->pc = 0x292A24u;
    {
        const bool branch_taken_0x292a24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x292a24) {
            ctx->pc = 0x29223Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29223c;
        }
    }
    ctx->pc = 0x292A2Cu;
    // 0x292a2c: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x292a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x292a30: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x292a30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_292a34:
    // 0x292a34: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x292a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x292a38: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x292a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x292a3c: 0x243202b  sltu        $a0, $s2, $v1
    ctx->pc = 0x292a3cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x292a40: 0x1480fdfb  bnez        $a0, . + 4 + (-0x205 << 2)
    ctx->pc = 0x292A40u;
    {
        const bool branch_taken_0x292a40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x292a40) {
            ctx->pc = 0x292230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292230;
        }
    }
    ctx->pc = 0x292A48u;
    // 0x292a48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x292a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292a4c: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x292a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x292a50: 0xa0850068  sb          $a1, 0x68($a0)
    ctx->pc = 0x292a50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 104), (uint8_t)GPR_U32(ctx, 5));
    // 0x292a54: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x292a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x292a58: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x292a58u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x292a5c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x292a5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x292a60: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x292a60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x292a64: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x292a64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x292a68: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x292a68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292a6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x292a6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292a70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x292a70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292a74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x292a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292a78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x292a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292a7c: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x292a7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x292a80: 0x3e00008  jr          $ra
    ctx->pc = 0x292A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292A88u;
    // 0x292a88: 0x0  nop
    ctx->pc = 0x292a88u;
    // NOP
    // 0x292a8c: 0x0  nop
    ctx->pc = 0x292a8cu;
    // NOP
    ctx->pc = 0x292a90u;
}
