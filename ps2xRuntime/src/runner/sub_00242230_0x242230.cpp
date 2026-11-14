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

// Function: sub_00242230
// Address: 0x242230 - 0x2423f0
void sub_00242230_0x242230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242230_0x242230");
#endif

    switch (ctx->pc) {
        case 0x242274u: goto label_242274;
        case 0x242284u: goto label_242284;
        case 0x242290u: goto label_242290;
        case 0x2422a0u: goto label_2422a0;
        case 0x2422b4u: goto label_2422b4;
        case 0x2422c8u: goto label_2422c8;
        case 0x2422ecu: goto label_2422ec;
        case 0x242310u: goto label_242310;
        case 0x242354u: goto label_242354;
        case 0x2423a0u: goto label_2423a0;
        case 0x2423c4u: goto label_2423c4;
        default: break;
    }

    ctx->pc = 0x242230u;

    // 0x242230: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x242230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x242234: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x242234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x242238: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x242238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24223c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24223cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x242240: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x242240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x242244: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x242244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x242248: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x242248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x24224c: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x24224cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x242250: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x242250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x242254: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x242254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x242258: 0x8c421144  lw          $v0, 0x1144($v0)
    ctx->pc = 0x242258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4420)));
    // 0x24225c: 0x1002003f  beq         $zero, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x24225Cu;
    {
        const bool branch_taken_0x24225c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x24225c) {
            ctx->pc = 0x24235Cu;
            goto label_24235c;
        }
    }
    ctx->pc = 0x242264u;
    // 0x242264: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x242264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x242268: 0x8c441144  lw          $a0, 0x1144($v0)
    ctx->pc = 0x242268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4420)));
    // 0x24226c: 0xc091aa8  jal         func_246AA0
    ctx->pc = 0x24226Cu;
    SET_GPR_U32(ctx, 31, 0x242274u);
    ctx->pc = 0x246AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AA0u, 0x24226Cu, 0x242274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242274u;
label_242274:
    // 0x242274: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x242274u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242278: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x242278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24227c: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x24227Cu;
    SET_GPR_U32(ctx, 31, 0x242284u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x24227Cu, 0x242284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242284u;
label_242284:
    // 0x242284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x242284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242288: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x242288u;
    {
        const bool branch_taken_0x242288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242288) {
            ctx->pc = 0x242348u;
            goto label_242348;
        }
    }
    ctx->pc = 0x242290u;
label_242290:
    // 0x242290: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x242290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x242294: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x242294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x242298: 0xc085538  jal         func_2154E0
    ctx->pc = 0x242298u;
    SET_GPR_U32(ctx, 31, 0x2422A0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x242298u, 0x2422A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2422A0u;
label_2422a0:
    // 0x2422a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2422a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2422a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2422a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2422a8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2422a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2422ac: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2422ACu;
    SET_GPR_U32(ctx, 31, 0x2422B4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2422ACu, 0x2422B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2422B4u;
label_2422b4:
    // 0x2422b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2422b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2422b8: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x2422b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2422bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2422bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2422c0: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2422C0u;
    SET_GPR_U32(ctx, 31, 0x2422C8u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2422C0u, 0x2422C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2422C8u;
label_2422c8:
    // 0x2422c8: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2422c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2422cc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2422ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2422d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2422d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2422d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2422d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2422d8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2422d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2422dc: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x2422dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2422e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2422e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2422e4: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2422E4u;
    SET_GPR_U32(ctx, 31, 0x2422ECu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2422E4u, 0x2422ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2422ECu;
label_2422ec:
    // 0x2422ec: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2422ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2422f0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2422f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2422f4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2422f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2422f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2422f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2422fc: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2422fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x242300: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x242300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242304: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x242304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x242308: 0xc0935fc  jal         func_24D7F0
    ctx->pc = 0x242308u;
    SET_GPR_U32(ctx, 31, 0x242310u);
    ctx->pc = 0x24D7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D7F0u, 0x242308u, 0x242310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242310u;
label_242310:
    // 0x242310: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x242310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x242314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242318: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x242318u;
    {
        const bool branch_taken_0x242318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x242318) {
            ctx->pc = 0x242344u;
            goto label_242344;
        }
    }
    ctx->pc = 0x242320u;
    // 0x242320: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x242320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x242324: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x242324u;
    {
        const bool branch_taken_0x242324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242324) {
            ctx->pc = 0x242338u;
            goto label_242338;
        }
    }
    ctx->pc = 0x24232Cu;
    // 0x24232c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24232cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x242330: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x242330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x242334: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x242334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_242338:
    // 0x242338: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x242338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24233c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24233Cu;
    {
        const bool branch_taken_0x24233c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24233c) {
            ctx->pc = 0x242360u;
            goto label_242360;
        }
    }
    ctx->pc = 0x242344u;
label_242344:
    // 0x242344: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x242344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_242348:
    // 0x242348: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x242348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24234c: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x24234Cu;
    SET_GPR_U32(ctx, 31, 0x242354u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x24234Cu, 0x242354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242354u;
label_242354:
    // 0x242354: 0x1602ffce  bne         $s0, $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x242354u;
    {
        const bool branch_taken_0x242354 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x242354) {
            ctx->pc = 0x242290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242290;
        }
    }
    ctx->pc = 0x24235Cu;
label_24235c:
    // 0x24235c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24235cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242360:
    // 0x242360: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x242360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x242364: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x242364u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x242368: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x242368u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24236c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24236cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242370: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x242370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242374: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x242374u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x242378: 0x3e00008  jr          $ra
    ctx->pc = 0x242378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242380u;
    // 0x242380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x242380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x242384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x242388: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x242388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24238c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x24238cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x242390: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x242390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242394: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x242394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242398: 0xc0852e4  jal         func_214B90
    ctx->pc = 0x242398u;
    SET_GPR_U32(ctx, 31, 0x2423A0u);
    ctx->pc = 0x214B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214B90u, 0x242398u, 0x2423A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2423A0u;
label_2423a0:
    // 0x2423a0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2423a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2423a4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2423a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2423a8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2423a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2423ac: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2423ACu;
    {
        const bool branch_taken_0x2423ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2423ac) {
            ctx->pc = 0x2423D4u;
            goto label_2423d4;
        }
    }
    ctx->pc = 0x2423B4u;
    // 0x2423b4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2423b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2423b8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2423b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2423bc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2423BCu;
    SET_GPR_U32(ctx, 31, 0x2423C4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2423BCu, 0x2423C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2423C4u;
label_2423c4:
    // 0x2423c4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2423c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2423c8: 0xac621144  sw          $v0, 0x1144($v1)
    ctx->pc = 0x2423c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4420), GPR_U32(ctx, 2));
    // 0x2423cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2423CCu;
    {
        const bool branch_taken_0x2423cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2423cc) {
            ctx->pc = 0x2423DCu;
            goto label_2423dc;
        }
    }
    ctx->pc = 0x2423D4u;
label_2423d4:
    // 0x2423d4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2423d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2423d8: 0xac601144  sw          $zero, 0x1144($v1)
    ctx->pc = 0x2423d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4420), GPR_U32(ctx, 0));
label_2423dc:
    // 0x2423dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2423dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2423e0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2423e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2423e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2423E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2423E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2423ECu;
    // 0x2423ec: 0x0  nop
    ctx->pc = 0x2423ecu;
    // NOP
    ctx->pc = 0x2423f0u;
}
