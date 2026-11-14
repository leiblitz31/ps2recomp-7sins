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

// Function: sub_001BF1D0
// Address: 0x1bf1d0 - 0x1bf5c0
void sub_001BF1D0_0x1bf1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF1D0_0x1bf1d0");
#endif

    switch (ctx->pc) {
        case 0x1bf38cu: goto label_1bf38c;
        case 0x1bf3d4u: goto label_1bf3d4;
        case 0x1bf3fcu: goto label_1bf3fc;
        case 0x1bf510u: goto label_1bf510;
        case 0x1bf544u: goto label_1bf544;
        case 0x1bf590u: goto label_1bf590;
        default: break;
    }

    ctx->pc = 0x1bf1d0u;

    // 0x1bf1d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1bf1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1bf1d4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1bf1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1bf1d8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bf1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1bf1dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bf1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bf1e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bf1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bf1e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bf1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bf1e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bf1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bf1ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bf1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bf1f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bf1f4: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x1bf1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x1bf1f8: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x1bf1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x1bf1fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bf1fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf200: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bf200u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf204: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1bf204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bf208: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BF208u;
    {
        const bool branch_taken_0x1bf208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf208) {
            ctx->pc = 0x1BF230u;
            goto label_1bf230;
        }
    }
    ctx->pc = 0x1BF210u;
    // 0x1bf210: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1bf210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bf214: 0x80630003  lb          $v1, 0x3($v1)
    ctx->pc = 0x1bf214u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bf218: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1bf218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1bf21c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1bf21cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1bf220: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BF220u;
    {
        const bool branch_taken_0x1bf220 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1bf220) {
            ctx->pc = 0x1BF230u;
            goto label_1bf230;
        }
    }
    ctx->pc = 0x1BF228u;
    // 0x1bf228: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf22c: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x1bf22cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bf230:
    // 0x1bf230: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BF230u;
    {
        const bool branch_taken_0x1bf230 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf230) {
            ctx->pc = 0x1BF248u;
            goto label_1bf248;
        }
    }
    ctx->pc = 0x1BF238u;
    // 0x1bf238: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf23c: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x1bf23cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bf240: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF240u;
    {
        const bool branch_taken_0x1bf240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf240) {
            ctx->pc = 0x1BF24Cu;
            goto label_1bf24c;
        }
    }
    ctx->pc = 0x1BF248u;
label_1bf248:
    // 0x1bf248: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bf248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf24c:
    // 0x1bf24c: 0x325600ff  andi        $s6, $s2, 0xFF
    ctx->pc = 0x1bf24cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1bf250: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x1bf250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x1bf254: 0x106000ce  beqz        $v1, . + 4 + (0xCE << 2)
    ctx->pc = 0x1BF254u;
    {
        const bool branch_taken_0x1bf254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf254) {
            ctx->pc = 0x1BF590u;
            goto label_1bf590;
        }
    }
    ctx->pc = 0x1BF25Cu;
    // 0x1bf25c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1bf25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bf260: 0x80420003  lb          $v0, 0x3($v0)
    ctx->pc = 0x1bf260u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1bf264: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1bf264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1bf268: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1bf268u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1bf26c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1bf26cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bf270: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bf270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bf274: 0x2442be50  addiu       $v0, $v0, -0x41B0
    ctx->pc = 0x1bf274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950480));
    // 0x1bf278: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bf278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bf27c: 0x8c550034  lw          $s5, 0x34($v0)
    ctx->pc = 0x1bf27cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1bf280: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1bf280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bf284: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x1bf284u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1bf288: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1bf288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bf28c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1bf28cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1bf290: 0x2402fc18  addiu       $v0, $zero, -0x3E8
    ctx->pc = 0x1bf290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    // 0x1bf294: 0x1462005b  bne         $v1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x1BF294u;
    {
        const bool branch_taken_0x1bf294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bf294) {
            ctx->pc = 0x1BF404u;
            goto label_1bf404;
        }
    }
    ctx->pc = 0x1BF29Cu;
    // 0x1bf29c: 0x2ea1000a  sltiu       $at, $s5, 0xA
    ctx->pc = 0x1bf29cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1bf2a0: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x1BF2A0u;
    {
        const bool branch_taken_0x1bf2a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf2a0) {
            ctx->pc = 0x1BF384u;
            goto label_1bf384;
        }
    }
    ctx->pc = 0x1BF2A8u;
    // 0x1bf2a8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1bf2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1bf2ac: 0x24638800  addiu       $v1, $v1, -0x7800
    ctx->pc = 0x1bf2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936576));
    // 0x1bf2b0: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x1bf2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1bf2b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bf2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bf2b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bf2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bf2bc: 0x400008  jr          $v0
    ctx->pc = 0x1BF2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BF2C4u: goto label_1bf2c4;
            case 0x1BF2D8u: goto label_1bf2d8;
            case 0x1BF2ECu: goto label_1bf2ec;
            case 0x1BF300u: goto label_1bf300;
            case 0x1BF314u: goto label_1bf314;
            case 0x1BF328u: goto label_1bf328;
            case 0x1BF33Cu: goto label_1bf33c;
            case 0x1BF350u: goto label_1bf350;
            case 0x1BF364u: goto label_1bf364;
            case 0x1BF378u: goto label_1bf378;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF2BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BF2C4u;
label_1bf2c4:
    // 0x1bf2c4: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bf2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bf2c8: 0x261070f0  addiu       $s0, $s0, 0x70F0
    ctx->pc = 0x1bf2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28912));
    // 0x1bf2cc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1bf2ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf2d0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1BF2D0u;
    {
        const bool branch_taken_0x1bf2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf2d0) {
            ctx->pc = 0x1BF384u;
            goto label_1bf384;
        }
    }
    ctx->pc = 0x1BF2D8u;
label_1bf2d8:
    // 0x1bf2d8: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bf2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bf2dc: 0x26107110  addiu       $s0, $s0, 0x7110
    ctx->pc = 0x1bf2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28944));
    // 0x1bf2e0: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1bf2e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bf2e4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1BF2E4u;
    {
        const bool branch_taken_0x1bf2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf2e4) {
            ctx->pc = 0x1BF384u;
            goto label_1bf384;
        }
    }
    ctx->pc = 0x1BF2ECu;
label_1bf2ec:
    // 0x1bf2ec: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bf2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bf2f0: 0x26107150  addiu       $s0, $s0, 0x7150
    ctx->pc = 0x1bf2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29008));
    // 0x1bf2f4: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1bf2f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bf2f8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1BF2F8u;
    {
        const bool branch_taken_0x1bf2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf2f8) {
            ctx->pc = 0x1BF384u;
            goto label_1bf384;
        }
    }
    ctx->pc = 0x1BF300u;
label_1bf300:
    // 0x1bf300: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bf300u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bf304: 0x261071a0  addiu       $s0, $s0, 0x71A0
    ctx->pc = 0x1bf304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29088));
    // 0x1bf308: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1bf308u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bf30c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1BF30Cu;
    {
        const bool branch_taken_0x1bf30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf30c) {
            ctx->pc = 0x1BF384u;
            goto label_1bf384;
        }
    }
    ctx->pc = 0x1BF314u;
label_1bf314:
    // 0x1bf314: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bf314u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bf318: 0x261071e0  addiu       $s0, $s0, 0x71E0
    ctx->pc = 0x1bf318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29152));
    // 0x1bf31c: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1bf31cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bf320: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1BF320u;
    {
        const bool branch_taken_0x1bf320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf320) {
            ctx->pc = 0x1BF384u;
            goto label_1bf384;
        }
    }
    ctx->pc = 0x1BF328u;
label_1bf328:
    // 0x1bf328: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bf328u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bf32c: 0x26107220  addiu       $s0, $s0, 0x7220
    ctx->pc = 0x1bf32cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29216));
    // 0x1bf330: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1bf330u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bf334: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1BF334u;
    {
        const bool branch_taken_0x1bf334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf334) {
            ctx->pc = 0x1BF384u;
            goto label_1bf384;
        }
    }
    ctx->pc = 0x1BF33Cu;
label_1bf33c:
    // 0x1bf33c: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bf33cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bf340: 0x26107260  addiu       $s0, $s0, 0x7260
    ctx->pc = 0x1bf340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29280));
    // 0x1bf344: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x1bf344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bf348: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1BF348u;
    {
        const bool branch_taken_0x1bf348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf348) {
            ctx->pc = 0x1BF384u;
            goto label_1bf384;
        }
    }
    ctx->pc = 0x1BF350u;
label_1bf350:
    // 0x1bf350: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bf350u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bf354: 0x261072e0  addiu       $s0, $s0, 0x72E0
    ctx->pc = 0x1bf354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29408));
    // 0x1bf358: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1bf358u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bf35c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BF35Cu;
    {
        const bool branch_taken_0x1bf35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf35c) {
            ctx->pc = 0x1BF384u;
            goto label_1bf384;
        }
    }
    ctx->pc = 0x1BF364u;
label_1bf364:
    // 0x1bf364: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bf364u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bf368: 0x26107310  addiu       $s0, $s0, 0x7310
    ctx->pc = 0x1bf368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29456));
    // 0x1bf36c: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x1bf36cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bf370: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF370u;
    {
        const bool branch_taken_0x1bf370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf370) {
            ctx->pc = 0x1BF384u;
            goto label_1bf384;
        }
    }
    ctx->pc = 0x1BF378u;
label_1bf378:
    // 0x1bf378: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bf378u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bf37c: 0x26107380  addiu       $s0, $s0, 0x7380
    ctx->pc = 0x1bf37cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29568));
    // 0x1bf380: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x1bf380u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1bf384:
    // 0x1bf384: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1BF384u;
    SET_GPR_U32(ctx, 31, 0x1BF38Cu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1BF384u, 0x1BF38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF38Cu;
label_1bf38c:
    // 0x1bf38c: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x1bf38cu;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1bf390: 0x1010  mfhi        $v0
    ctx->pc = 0x1bf390u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bf394: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bf394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bf398: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1bf398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bf39c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1bf39cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1bf3a0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1bf3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bf3a4: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x1bf3a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bf3a8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1bf3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bf3ac: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x1bf3acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1bf3b0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1bf3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bf3b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1bf3b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1bf3b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1bf3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1bf3bc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1bf3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bf3c0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1bf3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bf3c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bf3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf3c8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1bf3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bf3cc: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x1BF3CCu;
    SET_GPR_U32(ctx, 31, 0x1BF3D4u);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x1BF3CCu, 0x1BF3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF3D4u;
label_1bf3d4:
    // 0x1bf3d4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1bf3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bf3d8: 0x80420003  lb          $v0, 0x3($v0)
    ctx->pc = 0x1bf3d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1bf3dc: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x1bf3dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1bf3e0: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x1bf3e0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x1bf3e4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1bf3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bf3e8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1bf3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bf3ec: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1bf3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bf3f0: 0x24470010  addiu       $a3, $v0, 0x10
    ctx->pc = 0x1bf3f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1bf3f4: 0xc070040  jal         func_1C0100
    ctx->pc = 0x1BF3F4u;
    SET_GPR_U32(ctx, 31, 0x1BF3FCu);
    ctx->pc = 0x1C0100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0100u, 0x1BF3F4u, 0x1BF3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF3FCu;
label_1bf3fc:
    // 0x1bf3fc: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1BF3FCu;
    {
        const bool branch_taken_0x1bf3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf3fc) {
            ctx->pc = 0x1BF590u;
            goto label_1bf590;
        }
    }
    ctx->pc = 0x1BF404u;
label_1bf404:
    // 0x1bf404: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1bf404u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf408: 0x2ea1000a  sltiu       $at, $s5, 0xA
    ctx->pc = 0x1bf408u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1bf40c: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x1BF40Cu;
    {
        const bool branch_taken_0x1bf40c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf40c) {
            ctx->pc = 0x1BF4C8u;
            goto label_1bf4c8;
        }
    }
    ctx->pc = 0x1BF414u;
    // 0x1bf414: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1bf414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1bf418: 0x246387d0  addiu       $v1, $v1, -0x7830
    ctx->pc = 0x1bf418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936528));
    // 0x1bf41c: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x1bf41cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1bf420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bf420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bf424: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bf424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bf428: 0x400008  jr          $v0
    ctx->pc = 0x1BF428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BF430u: goto label_1bf430;
            case 0x1BF440u: goto label_1bf440;
            case 0x1BF450u: goto label_1bf450;
            case 0x1BF460u: goto label_1bf460;
            case 0x1BF470u: goto label_1bf470;
            case 0x1BF480u: goto label_1bf480;
            case 0x1BF490u: goto label_1bf490;
            case 0x1BF4A0u: goto label_1bf4a0;
            case 0x1BF4B0u: goto label_1bf4b0;
            case 0x1BF4C0u: goto label_1bf4c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF428u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BF430u;
label_1bf430:
    // 0x1bf430: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bf430u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bf434: 0x261070f0  addiu       $s0, $s0, 0x70F0
    ctx->pc = 0x1bf434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28912));
    // 0x1bf438: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1BF438u;
    {
        const bool branch_taken_0x1bf438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf438) {
            ctx->pc = 0x1BF4C8u;
            goto label_1bf4c8;
        }
    }
    ctx->pc = 0x1BF440u;
label_1bf440:
    // 0x1bf440: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bf440u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bf444: 0x26107110  addiu       $s0, $s0, 0x7110
    ctx->pc = 0x1bf444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28944));
    // 0x1bf448: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1BF448u;
    {
        const bool branch_taken_0x1bf448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf448) {
            ctx->pc = 0x1BF4C8u;
            goto label_1bf4c8;
        }
    }
    ctx->pc = 0x1BF450u;
label_1bf450:
    // 0x1bf450: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bf450u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bf454: 0x26107150  addiu       $s0, $s0, 0x7150
    ctx->pc = 0x1bf454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29008));
    // 0x1bf458: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1BF458u;
    {
        const bool branch_taken_0x1bf458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf458) {
            ctx->pc = 0x1BF4C8u;
            goto label_1bf4c8;
        }
    }
    ctx->pc = 0x1BF460u;
label_1bf460:
    // 0x1bf460: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bf460u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bf464: 0x261071a0  addiu       $s0, $s0, 0x71A0
    ctx->pc = 0x1bf464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29088));
    // 0x1bf468: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1BF468u;
    {
        const bool branch_taken_0x1bf468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf468) {
            ctx->pc = 0x1BF4C8u;
            goto label_1bf4c8;
        }
    }
    ctx->pc = 0x1BF470u;
label_1bf470:
    // 0x1bf470: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bf470u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bf474: 0x261071e0  addiu       $s0, $s0, 0x71E0
    ctx->pc = 0x1bf474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29152));
    // 0x1bf478: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1BF478u;
    {
        const bool branch_taken_0x1bf478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf478) {
            ctx->pc = 0x1BF4C8u;
            goto label_1bf4c8;
        }
    }
    ctx->pc = 0x1BF480u;
label_1bf480:
    // 0x1bf480: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bf480u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bf484: 0x26107220  addiu       $s0, $s0, 0x7220
    ctx->pc = 0x1bf484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29216));
    // 0x1bf488: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BF488u;
    {
        const bool branch_taken_0x1bf488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf488) {
            ctx->pc = 0x1BF4C8u;
            goto label_1bf4c8;
        }
    }
    ctx->pc = 0x1BF490u;
label_1bf490:
    // 0x1bf490: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bf490u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bf494: 0x26107260  addiu       $s0, $s0, 0x7260
    ctx->pc = 0x1bf494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29280));
    // 0x1bf498: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BF498u;
    {
        const bool branch_taken_0x1bf498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf498) {
            ctx->pc = 0x1BF4C8u;
            goto label_1bf4c8;
        }
    }
    ctx->pc = 0x1BF4A0u;
label_1bf4a0:
    // 0x1bf4a0: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bf4a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bf4a4: 0x261072e0  addiu       $s0, $s0, 0x72E0
    ctx->pc = 0x1bf4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29408));
    // 0x1bf4a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BF4A8u;
    {
        const bool branch_taken_0x1bf4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf4a8) {
            ctx->pc = 0x1BF4C8u;
            goto label_1bf4c8;
        }
    }
    ctx->pc = 0x1BF4B0u;
label_1bf4b0:
    // 0x1bf4b0: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bf4b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bf4b4: 0x26107310  addiu       $s0, $s0, 0x7310
    ctx->pc = 0x1bf4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29456));
    // 0x1bf4b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BF4B8u;
    {
        const bool branch_taken_0x1bf4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf4b8) {
            ctx->pc = 0x1BF4C8u;
            goto label_1bf4c8;
        }
    }
    ctx->pc = 0x1BF4C0u;
label_1bf4c0:
    // 0x1bf4c0: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x1bf4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x1bf4c4: 0x26107380  addiu       $s0, $s0, 0x7380
    ctx->pc = 0x1bf4c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29568));
label_1bf4c8:
    // 0x1bf4c8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1bf4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bf4cc: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x1bf4ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1bf4d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1bf4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bf4d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1bf4d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1bf4d8: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1BF4D8u;
    {
        const bool branch_taken_0x1bf4d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1bf4d8) {
            ctx->pc = 0x1BF518u;
            goto label_1bf518;
        }
    }
    ctx->pc = 0x1BF4E0u;
    // 0x1bf4e0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1bf4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bf4e4: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x1bf4e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1bf4e8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1bf4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bf4ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1bf4ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1bf4f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1bf4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1bf4f4: 0x202a021  addu        $s4, $s0, $v0
    ctx->pc = 0x1bf4f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bf4f8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1bf4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bf4fc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1bf4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bf500: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bf500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf504: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1bf504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf508: 0xc06fc20  jal         func_1BF080
    ctx->pc = 0x1BF508u;
    SET_GPR_U32(ctx, 31, 0x1BF510u);
    ctx->pc = 0x1BF080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF080u, 0x1BF508u, 0x1BF510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF510u;
label_1bf510:
    // 0x1bf510: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1BF510u;
    {
        const bool branch_taken_0x1bf510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf510) {
            ctx->pc = 0x1BF544u;
            goto label_1bf544;
        }
    }
    ctx->pc = 0x1BF518u;
label_1bf518:
    // 0x1bf518: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1bf518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bf51c: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x1bf51cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1bf520: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1bf520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bf524: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1bf524u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1bf528: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1bf528u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1bf52c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1bf52cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1bf530: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x1bf530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bf534: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1bf534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bf538: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1bf538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bf53c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x1BF53Cu;
    SET_GPR_U32(ctx, 31, 0x1BF544u);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x1BF53Cu, 0x1BF544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF544u;
label_1bf544:
    // 0x1bf544: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1bf544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bf548: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x1bf548u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1bf54c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1bf54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bf550: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1bf550u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1bf554: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1bf554u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1bf558: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1bf558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bf55c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1bf55cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1bf560: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1bf560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bf564: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x1bf564u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bf568: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1bf568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bf56c: 0x80420003  lb          $v0, 0x3($v0)
    ctx->pc = 0x1bf56cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1bf570: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x1bf570u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1bf574: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x1bf574u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x1bf578: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1bf578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bf57c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1bf57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bf580: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1bf580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bf584: 0x24470010  addiu       $a3, $v0, 0x10
    ctx->pc = 0x1bf584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1bf588: 0xc070040  jal         func_1C0100
    ctx->pc = 0x1BF588u;
    SET_GPR_U32(ctx, 31, 0x1BF590u);
    ctx->pc = 0x1C0100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0100u, 0x1BF588u, 0x1BF590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF590u;
label_1bf590:
    // 0x1bf590: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1bf590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bf594: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bf594u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bf598: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bf598u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bf59c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bf59cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bf5a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bf5a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bf5a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bf5a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf5a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bf5a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf5ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf5acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf5b0: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1bf5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bf5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF5BCu;
    // 0x1bf5bc: 0x0  nop
    ctx->pc = 0x1bf5bcu;
    // NOP
    ctx->pc = 0x1bf5c0u;
}
