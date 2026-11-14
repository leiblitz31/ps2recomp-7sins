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

// Function: sub_00119770
// Address: 0x119770 - 0x1199c0
void sub_00119770_0x119770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119770_0x119770");
#endif

    switch (ctx->pc) {
        case 0x119770u: goto label_119770;
        case 0x119774u: goto label_119774;
        case 0x119778u: goto label_119778;
        case 0x11977cu: goto label_11977c;
        case 0x119780u: goto label_119780;
        case 0x119784u: goto label_119784;
        case 0x119788u: goto label_119788;
        case 0x11978cu: goto label_11978c;
        case 0x119790u: goto label_119790;
        case 0x119794u: goto label_119794;
        case 0x119798u: goto label_119798;
        case 0x11979cu: goto label_11979c;
        case 0x1197a0u: goto label_1197a0;
        case 0x1197a4u: goto label_1197a4;
        case 0x1197a8u: goto label_1197a8;
        case 0x1197acu: goto label_1197ac;
        case 0x1197b0u: goto label_1197b0;
        case 0x1197b4u: goto label_1197b4;
        case 0x1197b8u: goto label_1197b8;
        case 0x1197bcu: goto label_1197bc;
        case 0x1197c0u: goto label_1197c0;
        case 0x1197c4u: goto label_1197c4;
        case 0x1197c8u: goto label_1197c8;
        case 0x1197ccu: goto label_1197cc;
        case 0x1197d0u: goto label_1197d0;
        case 0x1197d4u: goto label_1197d4;
        case 0x1197d8u: goto label_1197d8;
        case 0x1197dcu: goto label_1197dc;
        case 0x1197e0u: goto label_1197e0;
        case 0x1197e4u: goto label_1197e4;
        case 0x1197e8u: goto label_1197e8;
        case 0x1197ecu: goto label_1197ec;
        case 0x1197f0u: goto label_1197f0;
        case 0x1197f4u: goto label_1197f4;
        case 0x1197f8u: goto label_1197f8;
        case 0x1197fcu: goto label_1197fc;
        case 0x119800u: goto label_119800;
        case 0x119804u: goto label_119804;
        case 0x119808u: goto label_119808;
        case 0x11980cu: goto label_11980c;
        case 0x119810u: goto label_119810;
        case 0x119814u: goto label_119814;
        case 0x119818u: goto label_119818;
        case 0x11981cu: goto label_11981c;
        case 0x119820u: goto label_119820;
        case 0x119824u: goto label_119824;
        case 0x119828u: goto label_119828;
        case 0x11982cu: goto label_11982c;
        case 0x119830u: goto label_119830;
        case 0x119834u: goto label_119834;
        case 0x119838u: goto label_119838;
        case 0x11983cu: goto label_11983c;
        case 0x119840u: goto label_119840;
        case 0x119844u: goto label_119844;
        case 0x119848u: goto label_119848;
        case 0x11984cu: goto label_11984c;
        case 0x119850u: goto label_119850;
        case 0x119854u: goto label_119854;
        case 0x119858u: goto label_119858;
        case 0x11985cu: goto label_11985c;
        case 0x119860u: goto label_119860;
        case 0x119864u: goto label_119864;
        case 0x119868u: goto label_119868;
        case 0x11986cu: goto label_11986c;
        case 0x119870u: goto label_119870;
        case 0x119874u: goto label_119874;
        case 0x119878u: goto label_119878;
        case 0x11987cu: goto label_11987c;
        case 0x119880u: goto label_119880;
        case 0x119884u: goto label_119884;
        case 0x119888u: goto label_119888;
        case 0x11988cu: goto label_11988c;
        case 0x119890u: goto label_119890;
        case 0x119894u: goto label_119894;
        case 0x119898u: goto label_119898;
        case 0x11989cu: goto label_11989c;
        case 0x1198a0u: goto label_1198a0;
        case 0x1198a4u: goto label_1198a4;
        case 0x1198a8u: goto label_1198a8;
        case 0x1198acu: goto label_1198ac;
        case 0x1198b0u: goto label_1198b0;
        case 0x1198b4u: goto label_1198b4;
        case 0x1198b8u: goto label_1198b8;
        case 0x1198bcu: goto label_1198bc;
        case 0x1198c0u: goto label_1198c0;
        case 0x1198c4u: goto label_1198c4;
        case 0x1198c8u: goto label_1198c8;
        case 0x1198ccu: goto label_1198cc;
        case 0x1198d0u: goto label_1198d0;
        case 0x1198d4u: goto label_1198d4;
        case 0x1198d8u: goto label_1198d8;
        case 0x1198dcu: goto label_1198dc;
        case 0x1198e0u: goto label_1198e0;
        case 0x1198e4u: goto label_1198e4;
        case 0x1198e8u: goto label_1198e8;
        case 0x1198ecu: goto label_1198ec;
        case 0x1198f0u: goto label_1198f0;
        case 0x1198f4u: goto label_1198f4;
        case 0x1198f8u: goto label_1198f8;
        case 0x1198fcu: goto label_1198fc;
        case 0x119900u: goto label_119900;
        case 0x119904u: goto label_119904;
        case 0x119908u: goto label_119908;
        case 0x11990cu: goto label_11990c;
        case 0x119910u: goto label_119910;
        case 0x119914u: goto label_119914;
        case 0x119918u: goto label_119918;
        case 0x11991cu: goto label_11991c;
        case 0x119920u: goto label_119920;
        case 0x119924u: goto label_119924;
        case 0x119928u: goto label_119928;
        case 0x11992cu: goto label_11992c;
        case 0x119930u: goto label_119930;
        case 0x119934u: goto label_119934;
        case 0x119938u: goto label_119938;
        case 0x11993cu: goto label_11993c;
        case 0x119940u: goto label_119940;
        case 0x119944u: goto label_119944;
        case 0x119948u: goto label_119948;
        case 0x11994cu: goto label_11994c;
        case 0x119950u: goto label_119950;
        case 0x119954u: goto label_119954;
        case 0x119958u: goto label_119958;
        case 0x11995cu: goto label_11995c;
        case 0x119960u: goto label_119960;
        case 0x119964u: goto label_119964;
        case 0x119968u: goto label_119968;
        case 0x11996cu: goto label_11996c;
        case 0x119970u: goto label_119970;
        case 0x119974u: goto label_119974;
        case 0x119978u: goto label_119978;
        case 0x11997cu: goto label_11997c;
        case 0x119980u: goto label_119980;
        case 0x119984u: goto label_119984;
        case 0x119988u: goto label_119988;
        case 0x11998cu: goto label_11998c;
        case 0x119990u: goto label_119990;
        case 0x119994u: goto label_119994;
        case 0x119998u: goto label_119998;
        case 0x11999cu: goto label_11999c;
        case 0x1199a0u: goto label_1199a0;
        case 0x1199a4u: goto label_1199a4;
        case 0x1199a8u: goto label_1199a8;
        case 0x1199acu: goto label_1199ac;
        case 0x1199b0u: goto label_1199b0;
        case 0x1199b4u: goto label_1199b4;
        case 0x1199b8u: goto label_1199b8;
        case 0x1199bcu: goto label_1199bc;
        default: break;
    }

    ctx->pc = 0x119770u;

label_119770:
    // 0x119770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_119774:
    // 0x119774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x119774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_119778:
    // 0x119778: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x119778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_11977c:
    // 0x11977c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11977cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_119780:
    // 0x119780: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x119780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_119784:
    // 0x119784: 0xc0470b4  jal         func_11C2D0
label_119788:
    if (ctx->pc == 0x119788u) {
        ctx->pc = 0x11978Cu;
        goto label_11978c;
    }
    ctx->pc = 0x119784u;
    SET_GPR_U32(ctx, 31, 0x11978Cu);
    ctx->pc = 0x11C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C2D0u, 0x119784u, 0x11978Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11978Cu;
label_11978c:
    // 0x11978c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11978cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_119790:
    // 0x119790: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x119790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_119794:
    // 0x119794: 0x3e00008  jr          $ra
label_119798:
    if (ctx->pc == 0x119798u) {
        ctx->pc = 0x11979Cu;
        goto label_11979c;
    }
    ctx->pc = 0x119794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11979Cu;
label_11979c:
    // 0x11979c: 0x0  nop
    ctx->pc = 0x11979cu;
    // NOP
label_1197a0:
    // 0x1197a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1197a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1197a4:
    // 0x1197a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1197a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1197a8:
    // 0x1197a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1197a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1197ac:
    // 0x1197ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1197acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1197b0:
    // 0x1197b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1197b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1197b4:
    // 0x1197b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1197b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1197b8:
    // 0x1197b8: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1197b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_1197bc:
    // 0x1197bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1197bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1197c0:
    // 0x1197c0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1197c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1197c4:
    // 0x1197c4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1197c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1197c8:
    // 0x1197c8: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x1197c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1197cc:
    // 0x1197cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1197ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1197d0:
    // 0x1197d0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1197d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1197d4:
    // 0x1197d4: 0x320f809  jalr        $t9
label_1197d8:
    if (ctx->pc == 0x1197D8u) {
        ctx->pc = 0x1197DCu;
        goto label_1197dc;
    }
    ctx->pc = 0x1197D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1197DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1197D4u, 0x1197DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1197DCu;
label_1197dc:
    // 0x1197dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1197dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1197e0:
    // 0x1197e0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1197e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1197e4:
    // 0x1197e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1197e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1197e8:
    // 0x1197e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1197e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1197ec:
    // 0x1197ec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1197ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1197f0:
    // 0x1197f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1197f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1197f4:
    // 0x1197f4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1197f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1197f8:
    // 0x1197f8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1197f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1197fc:
    // 0x1197fc: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x1197fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_119800:
    // 0x119800: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119804:
    // 0x119804: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x119804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_119808:
    // 0x119808: 0x320f809  jalr        $t9
label_11980c:
    if (ctx->pc == 0x11980Cu) {
        ctx->pc = 0x119810u;
        goto label_119810;
    }
    ctx->pc = 0x119808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119810u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119808u, 0x119810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119810u;
label_119810:
    // 0x119810: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x119810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_119814:
    // 0x119814: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x119814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_119818:
    // 0x119818: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x119818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_11981c:
    // 0x11981c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11981cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_119820:
    // 0x119820: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x119820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_119824:
    // 0x119824: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x119824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_119828:
    // 0x119828: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x119828u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11982c:
    // 0x11982c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x11982cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_119830:
    // 0x119830: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x119830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_119834:
    // 0x119834: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119838:
    // 0x119838: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x119838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_11983c:
    // 0x11983c: 0x320f809  jalr        $t9
label_119840:
    if (ctx->pc == 0x119840u) {
        ctx->pc = 0x119844u;
        goto label_119844;
    }
    ctx->pc = 0x11983Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119844u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11983Cu, 0x119844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119844u;
label_119844:
    // 0x119844: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x119844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_119848:
    // 0x119848: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x119848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_11984c:
    // 0x11984c: 0xaf82b9dc  sw          $v0, -0x4624($gp)
    ctx->pc = 0x11984cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949340), GPR_U32(ctx, 2));
label_119850:
    // 0x119850: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x119850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_119854:
    // 0x119854: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x119854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_119858:
    // 0x119858: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119858u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11985c:
    // 0x11985c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x11985cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_119860:
    // 0x119860: 0x320f809  jalr        $t9
label_119864:
    if (ctx->pc == 0x119864u) {
        ctx->pc = 0x119868u;
        goto label_119868;
    }
    ctx->pc = 0x119860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119868u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119860u, 0x119868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119868u;
label_119868:
    // 0x119868: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x119868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11986c:
    // 0x11986c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x11986cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_119870:
    // 0x119870: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x119870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_119874:
    // 0x119874: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x119874u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_119878:
    // 0x119878: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x119878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_11987c:
    // 0x11987c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x11987cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_119880:
    // 0x119880: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x119880u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_119884:
    // 0x119884: 0xc12242c  jal         func_4890B0
label_119888:
    if (ctx->pc == 0x119888u) {
        ctx->pc = 0x11988Cu;
        goto label_11988c;
    }
    ctx->pc = 0x119884u;
    SET_GPR_U32(ctx, 31, 0x11988Cu);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x119884u, 0x11988Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11988Cu;
label_11988c:
    // 0x11988c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11988cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119890:
    // 0x119890: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x119890u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_119894:
    // 0x119894: 0x1011001e  beq         $zero, $s1, . + 4 + (0x1E << 2)
label_119898:
    if (ctx->pc == 0x119898u) {
        ctx->pc = 0x11989Cu;
        goto label_11989c;
    }
    ctx->pc = 0x119894u;
    {
        const bool branch_taken_0x119894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x119894) {
            ctx->pc = 0x119910u;
            goto label_119910;
        }
    }
    ctx->pc = 0x11989Cu;
label_11989c:
    // 0x11989c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11989cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1198a0:
    // 0x1198a0: 0xc106638  jal         func_4198E0
label_1198a4:
    if (ctx->pc == 0x1198A4u) {
        ctx->pc = 0x1198A8u;
        goto label_1198a8;
    }
    ctx->pc = 0x1198A0u;
    SET_GPR_U32(ctx, 31, 0x1198A8u);
    ctx->pc = 0x4198E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4198E0u, 0x1198A0u, 0x1198A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1198A8u;
label_1198a8:
    // 0x1198a8: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1198a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
label_1198ac:
    // 0x1198ac: 0x24841c08  addiu       $a0, $a0, 0x1C08
    ctx->pc = 0x1198acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7176));
label_1198b0:
    // 0x1198b0: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x1198b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1198b4:
    // 0x1198b4: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1198b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_1198b8:
    // 0x1198b8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1198b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1198bc:
    // 0x1198bc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1198bcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_1198c0:
    // 0x1198c0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1198c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1198c4:
    // 0x1198c4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1198c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1198c8:
    // 0x1198c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1198c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1198cc:
    // 0x1198cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1198ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1198d0:
    // 0x1198d0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1198d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1198d4:
    // 0x1198d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1198d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1198d8:
    // 0x1198d8: 0xc1065b8  jal         func_4196E0
label_1198dc:
    if (ctx->pc == 0x1198DCu) {
        ctx->pc = 0x1198E0u;
        goto label_1198e0;
    }
    ctx->pc = 0x1198D8u;
    SET_GPR_U32(ctx, 31, 0x1198E0u);
    ctx->pc = 0x4196E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4196E0u, 0x1198D8u, 0x1198E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1198E0u;
label_1198e0:
    // 0x1198e0: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1198e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
label_1198e4:
    // 0x1198e4: 0x24841c18  addiu       $a0, $a0, 0x1C18
    ctx->pc = 0x1198e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7192));
label_1198e8:
    // 0x1198e8: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1198e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1198ec:
    // 0x1198ec: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1198ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_1198f0:
    // 0x1198f0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1198f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1198f4:
    // 0x1198f4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1198f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_1198f8:
    // 0x1198f8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1198f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1198fc:
    // 0x1198fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1198fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_119900:
    // 0x119900: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x119900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_119904:
    // 0x119904: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x119904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_119908:
    // 0x119908: 0xc106598  jal         func_419660
label_11990c:
    if (ctx->pc == 0x11990Cu) {
        ctx->pc = 0x119910u;
        goto label_119910;
    }
    ctx->pc = 0x119908u;
    SET_GPR_U32(ctx, 31, 0x119910u);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x119908u, 0x119910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119910u;
label_119910:
    // 0x119910: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x119910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_119914:
    // 0x119914: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x119914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_119918:
    // 0x119918: 0xc0411e8  jal         func_1047A0
label_11991c:
    if (ctx->pc == 0x11991Cu) {
        ctx->pc = 0x119920u;
        goto label_119920;
    }
    ctx->pc = 0x119918u;
    SET_GPR_U32(ctx, 31, 0x119920u);
    ctx->pc = 0x1047A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047A0u, 0x119918u, 0x119920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119920u;
label_119920:
    // 0x119920: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119924:
    // 0x119924: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x119924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_119928:
    // 0x119928: 0x24a51c30  addiu       $a1, $a1, 0x1C30
    ctx->pc = 0x119928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7216));
label_11992c:
    // 0x11992c: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x11992cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
label_119930:
    // 0x119930: 0x24c69b20  addiu       $a2, $a2, -0x64E0
    ctx->pc = 0x119930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941472));
label_119934:
    // 0x119934: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x119934u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_119938:
    // 0x119938: 0xc085f9c  jal         func_217E70
label_11993c:
    if (ctx->pc == 0x11993Cu) {
        ctx->pc = 0x119940u;
        goto label_119940;
    }
    ctx->pc = 0x119938u;
    SET_GPR_U32(ctx, 31, 0x119940u);
    ctx->pc = 0x217E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217E70u, 0x119938u, 0x119940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119940u;
label_119940:
    // 0x119940: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x119940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_119944:
    // 0x119944: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x119944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_119948:
    // 0x119948: 0xc0411e8  jal         func_1047A0
label_11994c:
    if (ctx->pc == 0x11994Cu) {
        ctx->pc = 0x119950u;
        goto label_119950;
    }
    ctx->pc = 0x119948u;
    SET_GPR_U32(ctx, 31, 0x119950u);
    ctx->pc = 0x1047A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047A0u, 0x119948u, 0x119950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119950u;
label_119950:
    // 0x119950: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119954:
    // 0x119954: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x119954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_119958:
    // 0x119958: 0x24a51c50  addiu       $a1, $a1, 0x1C50
    ctx->pc = 0x119958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7248));
label_11995c:
    // 0x11995c: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x11995cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
label_119960:
    // 0x119960: 0x24c69b80  addiu       $a2, $a2, -0x6480
    ctx->pc = 0x119960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941568));
label_119964:
    // 0x119964: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x119964u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_119968:
    // 0x119968: 0xc085f9c  jal         func_217E70
label_11996c:
    if (ctx->pc == 0x11996Cu) {
        ctx->pc = 0x119970u;
        goto label_119970;
    }
    ctx->pc = 0x119968u;
    SET_GPR_U32(ctx, 31, 0x119970u);
    ctx->pc = 0x217E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217E70u, 0x119968u, 0x119970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119970u;
label_119970:
    // 0x119970: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x119970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_119974:
    // 0x119974: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x119974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_119978:
    // 0x119978: 0xc0852ac  jal         func_214AB0
label_11997c:
    if (ctx->pc == 0x11997Cu) {
        ctx->pc = 0x119980u;
        goto label_119980;
    }
    ctx->pc = 0x119978u;
    SET_GPR_U32(ctx, 31, 0x119980u);
    ctx->pc = 0x214AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214AB0u, 0x119978u, 0x119980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119980u;
label_119980:
    // 0x119980: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_119984:
    if (ctx->pc == 0x119984u) {
        ctx->pc = 0x119988u;
        goto label_119988;
    }
    ctx->pc = 0x119980u;
    {
        const bool branch_taken_0x119980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119980) {
            ctx->pc = 0x119998u;
            goto label_119998;
        }
    }
    ctx->pc = 0x119988u;
label_119988:
    // 0x119988: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_11998c:
    if (ctx->pc == 0x11998Cu) {
        ctx->pc = 0x119990u;
        goto label_119990;
    }
    ctx->pc = 0x119988u;
    {
        const bool branch_taken_0x119988 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x119988) {
            ctx->pc = 0x119998u;
            goto label_119998;
        }
    }
    ctx->pc = 0x119990u;
label_119990:
    // 0x119990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x119990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_119994:
    // 0x119994: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x119994u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_119998:
    // 0x119998: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x119998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11999c:
    // 0x11999c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11999cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1199a0:
    // 0x1199a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1199a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1199a4:
    // 0x1199a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1199a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1199a8:
    // 0x1199a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1199a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1199ac:
    // 0x1199ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1199acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1199b0:
    // 0x1199b0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1199b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1199b4:
    // 0x1199b4: 0x3e00008  jr          $ra
label_1199b8:
    if (ctx->pc == 0x1199B8u) {
        ctx->pc = 0x1199BCu;
        goto label_1199bc;
    }
    ctx->pc = 0x1199B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1199B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1199BCu;
label_1199bc:
    // 0x1199bc: 0x0  nop
    ctx->pc = 0x1199bcu;
    // NOP
    ctx->pc = 0x1199c0u;
}
