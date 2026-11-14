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

// Function: sub_003781B0
// Address: 0x3781b0 - 0x378230
void sub_003781B0_0x3781b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003781B0_0x3781b0");
#endif

    switch (ctx->pc) {
        case 0x3781b0u: goto label_3781b0;
        case 0x3781b4u: goto label_3781b4;
        case 0x3781b8u: goto label_3781b8;
        case 0x3781bcu: goto label_3781bc;
        case 0x3781c0u: goto label_3781c0;
        case 0x3781c4u: goto label_3781c4;
        case 0x3781c8u: goto label_3781c8;
        case 0x3781ccu: goto label_3781cc;
        case 0x3781d0u: goto label_3781d0;
        case 0x3781d4u: goto label_3781d4;
        case 0x3781d8u: goto label_3781d8;
        case 0x3781dcu: goto label_3781dc;
        case 0x3781e0u: goto label_3781e0;
        case 0x3781e4u: goto label_3781e4;
        case 0x3781e8u: goto label_3781e8;
        case 0x3781ecu: goto label_3781ec;
        case 0x3781f0u: goto label_3781f0;
        case 0x3781f4u: goto label_3781f4;
        case 0x3781f8u: goto label_3781f8;
        case 0x3781fcu: goto label_3781fc;
        case 0x378200u: goto label_378200;
        case 0x378204u: goto label_378204;
        case 0x378208u: goto label_378208;
        case 0x37820cu: goto label_37820c;
        case 0x378210u: goto label_378210;
        case 0x378214u: goto label_378214;
        case 0x378218u: goto label_378218;
        case 0x37821cu: goto label_37821c;
        case 0x378220u: goto label_378220;
        case 0x378224u: goto label_378224;
        case 0x378228u: goto label_378228;
        case 0x37822cu: goto label_37822c;
        default: break;
    }

    ctx->pc = 0x3781b0u;

label_3781b0:
    // 0x3781b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3781b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3781b4:
    // 0x3781b4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3781b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3781b8:
    // 0x3781b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3781b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3781bc:
    // 0x3781bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3781bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3781c0:
    // 0x3781c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3781c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3781c4:
    // 0x3781c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3781c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3781c8:
    // 0x3781c8: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3781c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3781cc:
    // 0x3781cc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3781ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3781d0:
    // 0x3781d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3781d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3781d4:
    // 0x3781d4: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x3781d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3781d8:
    // 0x3781d8: 0x40f809  jalr        $v0
label_3781dc:
    if (ctx->pc == 0x3781DCu) {
        ctx->pc = 0x3781DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3781D8u;
        // 0x3781dc: 0x34a5012a  ori         $a1, $a1, 0x12A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)298);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3781E0u;
        goto label_3781e0;
    }
    ctx->pc = 0x3781D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3781E0u);
        ctx->pc = 0x3781DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3781D8u;
        // 0x3781dc: 0x34a5012a  ori         $a1, $a1, 0x12A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)298);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3781D8u, 0x3781E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3781E0u;
label_3781e0:
    // 0x3781e0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3781e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3781e4:
    // 0x3781e4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3781e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_3781e8:
    // 0x3781e8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3781e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_3781ec:
    // 0x3781ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3781ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3781f0:
    // 0x3781f0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3781f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3781f4:
    // 0x3781f4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x3781f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3781f8:
    // 0x3781f8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x3781f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3781fc:
    // 0x3781fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_378200:
    if (ctx->pc == 0x378200u) {
        ctx->pc = 0x378200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3781FCu;
        // 0x378200: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x378204u;
        goto label_378204;
    }
    ctx->pc = 0x3781FCu;
    {
        const bool branch_taken_0x3781fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x378200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3781FCu;
        // 0x378200: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3781fc) {
            ctx->pc = 0x378218u;
            goto label_378218;
        }
    }
    ctx->pc = 0x378204u;
label_378204:
    // 0x378204: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x378204u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_378208:
    // 0x378208: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x378208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37820c:
    // 0x37820c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x37820cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_378210:
    // 0x378210: 0x10000002  b           . + 4 + (0x2 << 2)
label_378214:
    if (ctx->pc == 0x378214u) {
        ctx->pc = 0x378214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378210u;
        // 0x378214: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378218u;
        goto label_378218;
    }
    ctx->pc = 0x378210u;
    {
        const bool branch_taken_0x378210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378210u;
        // 0x378214: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378210) {
            ctx->pc = 0x37821Cu;
            goto label_37821c;
        }
    }
    ctx->pc = 0x378218u;
label_378218:
    // 0x378218: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x378218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_37821c:
    // 0x37821c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37821cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_378220:
    // 0x378220: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x378220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_378224:
    // 0x378224: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x378224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_378228:
    // 0x378228: 0x3e00008  jr          $ra
label_37822c:
    if (ctx->pc == 0x37822Cu) {
        ctx->pc = 0x37822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378228u;
        // 0x37822c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378230u;
        goto label_fallthrough_0x378228;
    }
    ctx->pc = 0x378228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378228u;
        // 0x37822c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x378228:
    ctx->pc = 0x378230u;
}
