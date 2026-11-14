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

// Function: sub_001781C0
// Address: 0x1781c0 - 0x178460
void sub_001781C0_0x1781c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001781C0_0x1781c0");
#endif

    switch (ctx->pc) {
        case 0x1781f8u: goto label_1781f8;
        case 0x17820cu: goto label_17820c;
        case 0x178228u: goto label_178228;
        case 0x17823cu: goto label_17823c;
        case 0x178254u: goto label_178254;
        case 0x178274u: goto label_178274;
        case 0x178284u: goto label_178284;
        case 0x17829cu: goto label_17829c;
        case 0x178398u: goto label_178398;
        case 0x1783b4u: goto label_1783b4;
        case 0x1783d0u: goto label_1783d0;
        case 0x1783f0u: goto label_1783f0;
        case 0x178404u: goto label_178404;
        case 0x17841cu: goto label_17841c;
        default: break;
    }

    ctx->pc = 0x1781c0u;

    // 0x1781c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1781c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1781c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1781c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1781c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1781c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1781cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1781ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1781d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1781d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1781d4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1781d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1781d8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1781d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x1781dc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1781dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1781e0: 0x10600096  beqz        $v1, . + 4 + (0x96 << 2)
    ctx->pc = 0x1781E0u;
    {
        const bool branch_taken_0x1781e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1781e0) {
            ctx->pc = 0x17843Cu;
            goto label_17843c;
        }
    }
    ctx->pc = 0x1781E8u;
    // 0x1781e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1781e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781ec: 0x24110011  addiu       $s1, $zero, 0x11
    ctx->pc = 0x1781ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1781f0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1781F0u;
    {
        const bool branch_taken_0x1781f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1781f0) {
            ctx->pc = 0x178258u;
            goto label_178258;
        }
    }
    ctx->pc = 0x1781F8u;
label_1781f8:
    // 0x1781f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1781f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1781fc: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x1781fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x178200: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x178200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178204: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x178204u;
    SET_GPR_U32(ctx, 31, 0x17820Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x178204u, 0x17820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17820Cu;
label_17820c:
    // 0x17820c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17820cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178210: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x178210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178214: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x178214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x178218: 0x278690d0  addiu       $a2, $gp, -0x6F30
    ctx->pc = 0x178218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938832));
    // 0x17821c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17821cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178220: 0xc08c800  jal         func_232000
    ctx->pc = 0x178220u;
    SET_GPR_U32(ctx, 31, 0x178228u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x178220u, 0x178228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178228u;
label_178228:
    // 0x178228: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x178228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17822c: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x17822cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x178230: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x178230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178234: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x178234u;
    SET_GPR_U32(ctx, 31, 0x17823Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x178234u, 0x17823Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17823Cu;
label_17823c:
    // 0x17823c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17823cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178240: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x178240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178244: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x178244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x178248: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x178248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17824c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x17824Cu;
    SET_GPR_U32(ctx, 31, 0x178254u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x17824Cu, 0x178254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178254u;
label_178254:
    // 0x178254: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x178254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_178258:
    // 0x178258: 0x2e210019  sltiu       $at, $s1, 0x19
    ctx->pc = 0x178258u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x17825c: 0x1420ffe6  bnez        $at, . + 4 + (-0x1A << 2)
    ctx->pc = 0x17825Cu;
    {
        const bool branch_taken_0x17825c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17825c) {
            ctx->pc = 0x1781F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1781f8;
        }
    }
    ctx->pc = 0x178264u;
    // 0x178264: 0x24110011  addiu       $s1, $zero, 0x11
    ctx->pc = 0x178264u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x178268: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x178268u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x17826c: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x17826Cu;
    {
        const bool branch_taken_0x17826c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17826c) {
            ctx->pc = 0x178424u;
            goto label_178424;
        }
    }
    ctx->pc = 0x178274u;
label_178274:
    // 0x178274: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x178274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x178278: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x178278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17827c: 0xc098098  jal         func_260260
    ctx->pc = 0x17827Cu;
    SET_GPR_U32(ctx, 31, 0x178284u);
    ctx->pc = 0x260260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260260u, 0x17827Cu, 0x178284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178284u;
label_178284:
    // 0x178284: 0x18400066  blez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x178284u;
    {
        const bool branch_taken_0x178284 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x178284) {
            ctx->pc = 0x178420u;
            goto label_178420;
        }
    }
    ctx->pc = 0x17828Cu;
    // 0x17828c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x17828cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x178290: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x178290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178294: 0xc0980d0  jal         func_260340
    ctx->pc = 0x178294u;
    SET_GPR_U32(ctx, 31, 0x17829Cu);
    ctx->pc = 0x260340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260340u, 0x178294u, 0x17829Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17829Cu;
label_17829c:
    // 0x17829c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x17829cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1782a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1782a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1782a4: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1782A4u;
    {
        const bool branch_taken_0x1782a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1782a4) {
            ctx->pc = 0x1783BCu;
            goto label_1783bc;
        }
    }
    ctx->pc = 0x1782ACu;
    // 0x1782ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1782acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1782b0: 0x2642fff9  addiu       $v0, $s2, -0x7
    ctx->pc = 0x1782b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967289));
    // 0x1782b4: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x1782b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x1782b8: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x1782B8u;
    {
        const bool branch_taken_0x1782b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1782b8) {
            ctx->pc = 0x178384u;
            goto label_178384;
        }
    }
    ctx->pc = 0x1782C0u;
    // 0x1782c0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1782c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1782c4: 0x24638600  addiu       $v1, $v1, -0x7A00
    ctx->pc = 0x1782c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936064));
    // 0x1782c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1782c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1782cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1782ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1782d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1782d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1782d4: 0x400008  jr          $v0
    ctx->pc = 0x1782D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1782DCu: goto label_1782dc;
            case 0x1782ECu: goto label_1782ec;
            case 0x1782FCu: goto label_1782fc;
            case 0x17830Cu: goto label_17830c;
            case 0x17831Cu: goto label_17831c;
            case 0x17832Cu: goto label_17832c;
            case 0x17833Cu: goto label_17833c;
            case 0x17834Cu: goto label_17834c;
            case 0x17835Cu: goto label_17835c;
            case 0x17836Cu: goto label_17836c;
            case 0x17837Cu: goto label_17837c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1782D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1782DCu;
label_1782dc:
    // 0x1782dc: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1782dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1782e0: 0x26104c20  addiu       $s0, $s0, 0x4C20
    ctx->pc = 0x1782e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19488));
    // 0x1782e4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1782E4u;
    {
        const bool branch_taken_0x1782e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1782e4) {
            ctx->pc = 0x178384u;
            goto label_178384;
        }
    }
    ctx->pc = 0x1782ECu;
label_1782ec:
    // 0x1782ec: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1782ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1782f0: 0x26104c38  addiu       $s0, $s0, 0x4C38
    ctx->pc = 0x1782f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19512));
    // 0x1782f4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1782F4u;
    {
        const bool branch_taken_0x1782f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1782f4) {
            ctx->pc = 0x178384u;
            goto label_178384;
        }
    }
    ctx->pc = 0x1782FCu;
label_1782fc:
    // 0x1782fc: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1782fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x178300: 0x26104c48  addiu       $s0, $s0, 0x4C48
    ctx->pc = 0x178300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19528));
    // 0x178304: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x178304u;
    {
        const bool branch_taken_0x178304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178304) {
            ctx->pc = 0x178384u;
            goto label_178384;
        }
    }
    ctx->pc = 0x17830Cu;
label_17830c:
    // 0x17830c: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x17830cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x178310: 0x26104c60  addiu       $s0, $s0, 0x4C60
    ctx->pc = 0x178310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19552));
    // 0x178314: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x178314u;
    {
        const bool branch_taken_0x178314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178314) {
            ctx->pc = 0x178384u;
            goto label_178384;
        }
    }
    ctx->pc = 0x17831Cu;
label_17831c:
    // 0x17831c: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x17831cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x178320: 0x26104c70  addiu       $s0, $s0, 0x4C70
    ctx->pc = 0x178320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19568));
    // 0x178324: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x178324u;
    {
        const bool branch_taken_0x178324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178324) {
            ctx->pc = 0x178384u;
            goto label_178384;
        }
    }
    ctx->pc = 0x17832Cu;
label_17832c:
    // 0x17832c: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x17832cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x178330: 0x26104c80  addiu       $s0, $s0, 0x4C80
    ctx->pc = 0x178330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19584));
    // 0x178334: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x178334u;
    {
        const bool branch_taken_0x178334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178334) {
            ctx->pc = 0x178384u;
            goto label_178384;
        }
    }
    ctx->pc = 0x17833Cu;
label_17833c:
    // 0x17833c: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x17833cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x178340: 0x26104ca0  addiu       $s0, $s0, 0x4CA0
    ctx->pc = 0x178340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19616));
    // 0x178344: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x178344u;
    {
        const bool branch_taken_0x178344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178344) {
            ctx->pc = 0x178384u;
            goto label_178384;
        }
    }
    ctx->pc = 0x17834Cu;
label_17834c:
    // 0x17834c: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x17834cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x178350: 0x26104cb0  addiu       $s0, $s0, 0x4CB0
    ctx->pc = 0x178350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19632));
    // 0x178354: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x178354u;
    {
        const bool branch_taken_0x178354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178354) {
            ctx->pc = 0x178384u;
            goto label_178384;
        }
    }
    ctx->pc = 0x17835Cu;
label_17835c:
    // 0x17835c: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x17835cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x178360: 0x26104cc0  addiu       $s0, $s0, 0x4CC0
    ctx->pc = 0x178360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19648));
    // 0x178364: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x178364u;
    {
        const bool branch_taken_0x178364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178364) {
            ctx->pc = 0x178384u;
            goto label_178384;
        }
    }
    ctx->pc = 0x17836Cu;
label_17836c:
    // 0x17836c: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x17836cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x178370: 0x26104cd0  addiu       $s0, $s0, 0x4CD0
    ctx->pc = 0x178370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19664));
    // 0x178374: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x178374u;
    {
        const bool branch_taken_0x178374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178374) {
            ctx->pc = 0x178384u;
            goto label_178384;
        }
    }
    ctx->pc = 0x17837Cu;
label_17837c:
    // 0x17837c: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x17837cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x178380: 0x26104ce0  addiu       $s0, $s0, 0x4CE0
    ctx->pc = 0x178380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19680));
label_178384:
    // 0x178384: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x178384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178388: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x178388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x17838c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17838cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178390: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x178390u;
    SET_GPR_U32(ctx, 31, 0x178398u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x178390u, 0x178398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178398u;
label_178398:
    // 0x178398: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x178398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17839c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17839cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1783a0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1783a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1783a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1783a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1783a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783ac: 0xc08c800  jal         func_232000
    ctx->pc = 0x1783ACu;
    SET_GPR_U32(ctx, 31, 0x1783B4u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x1783ACu, 0x1783B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1783B4u;
label_1783b4:
    // 0x1783b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1783B4u;
    {
        const bool branch_taken_0x1783b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1783b4) {
            ctx->pc = 0x1783F0u;
            goto label_1783f0;
        }
    }
    ctx->pc = 0x1783BCu;
label_1783bc:
    // 0x1783bc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1783bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1783c0: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x1783c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x1783c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1783c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783c8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1783C8u;
    SET_GPR_U32(ctx, 31, 0x1783D0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1783C8u, 0x1783D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1783D0u;
label_1783d0:
    // 0x1783d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1783d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1783d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1783d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1783d8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1783d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1783dc: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x1783dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x1783e0: 0x24c64bf0  addiu       $a2, $a2, 0x4BF0
    ctx->pc = 0x1783e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19440));
    // 0x1783e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1783e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783e8: 0xc08c800  jal         func_232000
    ctx->pc = 0x1783E8u;
    SET_GPR_U32(ctx, 31, 0x1783F0u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x1783E8u, 0x1783F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1783F0u;
label_1783f0:
    // 0x1783f0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1783f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1783f4: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x1783f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x1783f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1783f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783fc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1783FCu;
    SET_GPR_U32(ctx, 31, 0x178404u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1783FCu, 0x178404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178404u;
label_178404:
    // 0x178404: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x178404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178408: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x178408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17840c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17840cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x178410: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x178410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178414: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x178414u;
    SET_GPR_U32(ctx, 31, 0x17841Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x178414u, 0x17841Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17841Cu;
label_17841c:
    // 0x17841c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17841cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_178420:
    // 0x178420: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x178420u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_178424:
    // 0x178424: 0x2a410012  slti        $at, $s2, 0x12
    ctx->pc = 0x178424u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x178428: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x178428u;
    {
        const bool branch_taken_0x178428 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x178428) {
            ctx->pc = 0x17843Cu;
            goto label_17843c;
        }
    }
    ctx->pc = 0x178430u;
    // 0x178430: 0x2e210019  sltiu       $at, $s1, 0x19
    ctx->pc = 0x178430u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x178434: 0x1420ff8f  bnez        $at, . + 4 + (-0x71 << 2)
    ctx->pc = 0x178434u;
    {
        const bool branch_taken_0x178434 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x178434) {
            ctx->pc = 0x178274u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178274;
        }
    }
    ctx->pc = 0x17843Cu;
label_17843c:
    // 0x17843c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17843cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178440: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178440u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178444: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178448: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17844c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x17844cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x178450: 0x3e00008  jr          $ra
    ctx->pc = 0x178450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178458u;
    // 0x178458: 0x0  nop
    ctx->pc = 0x178458u;
    // NOP
    // 0x17845c: 0x0  nop
    ctx->pc = 0x17845cu;
    // NOP
    ctx->pc = 0x178460u;
}
