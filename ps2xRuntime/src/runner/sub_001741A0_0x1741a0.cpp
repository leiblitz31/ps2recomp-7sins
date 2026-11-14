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

// Function: sub_001741A0
// Address: 0x1741a0 - 0x174320
void sub_001741A0_0x1741a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001741A0_0x1741a0");
#endif

    switch (ctx->pc) {
        case 0x17420cu: goto label_17420c;
        case 0x174218u: goto label_174218;
        case 0x174240u: goto label_174240;
        case 0x174248u: goto label_174248;
        case 0x174258u: goto label_174258;
        case 0x174270u: goto label_174270;
        case 0x174280u: goto label_174280;
        case 0x174294u: goto label_174294;
        case 0x17429cu: goto label_17429c;
        case 0x1742b4u: goto label_1742b4;
        case 0x1742d4u: goto label_1742d4;
        case 0x1742ecu: goto label_1742ec;
        default: break;
    }

    ctx->pc = 0x1741a0u;

    // 0x1741a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1741a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1741a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1741a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1741a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1741a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1741ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1741acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1741b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1741b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1741b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1741b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1741b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1741b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1741bc: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1741bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x1741c0: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x1741c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x1741c4: 0x8fb00070  lw          $s0, 0x70($sp)
    ctx->pc = 0x1741c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1741c8: 0x10100049  beq         $zero, $s0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1741C8u;
    {
        const bool branch_taken_0x1741c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x1741c8) {
            ctx->pc = 0x1742F0u;
            goto label_1742f0;
        }
    }
    ctx->pc = 0x1741D0u;
    // 0x1741d0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1741d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1741d4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1741d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1741d8: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x1741D8u;
    {
        const bool branch_taken_0x1741d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1741d8) {
            ctx->pc = 0x1742ECu;
            goto label_1742ec;
        }
    }
    ctx->pc = 0x1741E0u;
    // 0x1741e0: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x1741e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1741e4: 0x10800041  beqz        $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1741E4u;
    {
        const bool branch_taken_0x1741e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1741e4) {
            ctx->pc = 0x1742ECu;
            goto label_1742ec;
        }
    }
    ctx->pc = 0x1741ECu;
    // 0x1741ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1741ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1741f0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1741F0u;
    {
        const bool branch_taken_0x1741f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1741f0) {
            ctx->pc = 0x174200u;
            goto label_174200;
        }
    }
    ctx->pc = 0x1741F8u;
    // 0x1741f8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1741F8u;
    {
        const bool branch_taken_0x1741f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1741f8) {
            ctx->pc = 0x1742ECu;
            goto label_1742ec;
        }
    }
    ctx->pc = 0x174200u;
label_174200:
    // 0x174200: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x174200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x174204: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x174204u;
    SET_GPR_U32(ctx, 31, 0x17420Cu);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x174204u, 0x17420Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17420Cu;
label_17420c:
    // 0x17420c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17420cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174210: 0xc047eb0  jal         func_11FAC0
    ctx->pc = 0x174210u;
    SET_GPR_U32(ctx, 31, 0x174218u);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x174210u, 0x174218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174218u;
label_174218:
    // 0x174218: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x174218u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17421c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x17421cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x174220: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x174220u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x174224: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x174224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x174228: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x174228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x17422c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17422cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x174230: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x174230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x174234: 0x24050534  addiu       $a1, $zero, 0x534
    ctx->pc = 0x174234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
    // 0x174238: 0xc041bc4  jal         func_106F10
    ctx->pc = 0x174238u;
    SET_GPR_U32(ctx, 31, 0x174240u);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x174238u, 0x174240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174240u;
label_174240:
    // 0x174240: 0xc05548c  jal         func_155230
    ctx->pc = 0x174240u;
    SET_GPR_U32(ctx, 31, 0x174248u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x174240u, 0x174248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174248u;
label_174248:
    // 0x174248: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17424c: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x17424cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x174250: 0xc0553d4  jal         func_154F50
    ctx->pc = 0x174250u;
    SET_GPR_U32(ctx, 31, 0x174258u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x174250u, 0x174258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174258u;
label_174258:
    // 0x174258: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x174258u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17425c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x17425Cu;
    {
        const bool branch_taken_0x17425c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x17425c) {
            ctx->pc = 0x174280u;
            goto label_174280;
        }
    }
    ctx->pc = 0x174264u;
    // 0x174264: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x174264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174268: 0xc08d230  jal         func_2348C0
    ctx->pc = 0x174268u;
    SET_GPR_U32(ctx, 31, 0x174270u);
    ctx->pc = 0x2348C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2348C0u, 0x174268u, 0x174270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174270u;
label_174270:
    // 0x174270: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x174270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174278: 0xc055a78  jal         func_1569E0
    ctx->pc = 0x174278u;
    SET_GPR_U32(ctx, 31, 0x174280u);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x174278u, 0x174280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174280u;
label_174280:
    // 0x174280: 0x142823  negu        $a1, $s4
    ctx->pc = 0x174280u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x174284: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x174284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x174288: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17428c: 0xc08d4a4  jal         func_235290
    ctx->pc = 0x17428Cu;
    SET_GPR_U32(ctx, 31, 0x174294u);
    ctx->pc = 0x235290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235290u, 0x17428Cu, 0x174294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174294u;
label_174294:
    // 0x174294: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x174294u;
    SET_GPR_U32(ctx, 31, 0x17429Cu);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x174294u, 0x17429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17429Cu;
label_17429c:
    // 0x17429c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17429cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1742a0: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1742A0u;
    {
        const bool branch_taken_0x1742a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1742a0) {
            ctx->pc = 0x1742DCu;
            goto label_1742dc;
        }
    }
    ctx->pc = 0x1742A8u;
    // 0x1742a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1742a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1742ac: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x1742ACu;
    SET_GPR_U32(ctx, 31, 0x1742B4u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x1742ACu, 0x1742B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1742B4u;
label_1742b4:
    // 0x1742b4: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1742b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1742b8: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1742B8u;
    {
        const bool branch_taken_0x1742b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1742b8) {
            ctx->pc = 0x1742DCu;
            goto label_1742dc;
        }
    }
    ctx->pc = 0x1742C0u;
    // 0x1742c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1742c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1742c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1742c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1742c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1742c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1742cc: 0xc041354  jal         func_104D50
    ctx->pc = 0x1742CCu;
    SET_GPR_U32(ctx, 31, 0x1742D4u);
    ctx->pc = 0x104D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104D50u, 0x1742CCu, 0x1742D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1742D4u;
label_1742d4:
    // 0x1742d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1742D4u;
    {
        const bool branch_taken_0x1742d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1742d4) {
            ctx->pc = 0x1742ECu;
            goto label_1742ec;
        }
    }
    ctx->pc = 0x1742DCu;
label_1742dc:
    // 0x1742dc: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1742dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1742e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1742e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1742e4: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x1742E4u;
    SET_GPR_U32(ctx, 31, 0x1742ECu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x1742E4u, 0x1742ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1742ECu;
label_1742ec:
    // 0x1742ec: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x1742ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_1742f0:
    // 0x1742f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1742f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1742f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1742f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1742f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1742f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1742fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1742fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174308: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x174308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17430c: 0x3e00008  jr          $ra
    ctx->pc = 0x17430Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17430Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174314u;
    // 0x174314: 0x0  nop
    ctx->pc = 0x174314u;
    // NOP
    // 0x174318: 0x0  nop
    ctx->pc = 0x174318u;
    // NOP
    // 0x17431c: 0x0  nop
    ctx->pc = 0x17431cu;
    // NOP
    ctx->pc = 0x174320u;
}
