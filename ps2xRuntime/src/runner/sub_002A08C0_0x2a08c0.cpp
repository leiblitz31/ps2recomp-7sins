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

// Function: sub_002A08C0
// Address: 0x2a08c0 - 0x2a0ae0
void sub_002A08C0_0x2a08c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A08C0_0x2a08c0");
#endif

    switch (ctx->pc) {
        case 0x2a090cu: goto label_2a090c;
        case 0x2a091cu: goto label_2a091c;
        case 0x2a0964u: goto label_2a0964;
        case 0x2a09a8u: goto label_2a09a8;
        case 0x2a09ccu: goto label_2a09cc;
        case 0x2a0a10u: goto label_2a0a10;
        case 0x2a0a34u: goto label_2a0a34;
        case 0x2a0a48u: goto label_2a0a48;
        case 0x2a0a6cu: goto label_2a0a6c;
        case 0x2a0a9cu: goto label_2a0a9c;
        case 0x2a0aacu: goto label_2a0aac;
        default: break;
    }

    ctx->pc = 0x2a08c0u;

    // 0x2a08c0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2a08c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2a08c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2a08c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2a08c8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2a08c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2a08cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a08ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2a08d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a08d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a08d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a08d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a08d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a08d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a08dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a08dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a08e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a08e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a08e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a08e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a08e8: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x2a08e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x2a08ec: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x2a08ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x2a08f0: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x2a08f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x2a08f4: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x2a08f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
    // 0x2a08f8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2a08f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a08fc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2a08fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2a0900: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2a0900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2a0904: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A0904u;
    SET_GPR_U32(ctx, 31, 0x2A090Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A0904u, 0x2A090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A090Cu;
label_2a090c:
    // 0x2a090c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2a090cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0910: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a0910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0914: 0xc091018  jal         func_244060
    ctx->pc = 0x2A0914u;
    SET_GPR_U32(ctx, 31, 0x2A091Cu);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x2A0914u, 0x2A091Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A091Cu;
label_2a091c:
    // 0x2a091c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a091cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0920: 0x24140006  addiu       $s4, $zero, 0x6
    ctx->pc = 0x2a0920u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a0924: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a0924u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0928: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x2a0928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x2a092c: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x2a092cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2a0930: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0930u;
    {
        const bool branch_taken_0x2a0930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0930) {
            ctx->pc = 0x2A0940u;
            goto label_2a0940;
        }
    }
    ctx->pc = 0x2A0938u;
    // 0x2a0938: 0x24140007  addiu       $s4, $zero, 0x7
    ctx->pc = 0x2a0938u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a093c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2a093cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a0940:
    // 0x2a0940: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2a0940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a0944: 0x9042019c  lbu         $v0, 0x19C($v0)
    ctx->pc = 0x2a0944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 412)));
    // 0x2a0948: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a0948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a094c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2A094Cu;
    {
        const bool branch_taken_0x2a094c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a094c) {
            ctx->pc = 0x2A09BCu;
            goto label_2a09bc;
        }
    }
    ctx->pc = 0x2A0954u;
    // 0x2a0954: 0x8fb100b0  lw          $s1, 0xB0($sp)
    ctx->pc = 0x2a0954u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a0958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a0958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a095c: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2A095Cu;
    SET_GPR_U32(ctx, 31, 0x2A0964u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2A095Cu, 0x2A0964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0964u;
label_2a0964:
    // 0x2a0964: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a0964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a0968: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2a0968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2a096c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2a096cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a0970: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2a0970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2a0974: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2a0974u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2a0978: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2a0978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2a097c: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2A097Cu;
    {
        const bool branch_taken_0x2a097c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a097c) {
            ctx->pc = 0x2A0A1Cu;
            goto label_2a0a1c;
        }
    }
    ctx->pc = 0x2A0984u;
    // 0x2a0984: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2a0984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a0988: 0x8c420194  lw          $v0, 0x194($v0)
    ctx->pc = 0x2a0988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
    // 0x2a098c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2a098cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a0990: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x2A0990u;
    {
        const bool branch_taken_0x2a0990 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0990) {
            ctx->pc = 0x2A0A1Cu;
            goto label_2a0a1c;
        }
    }
    ctx->pc = 0x2A0998u;
    // 0x2a0998: 0x24170032  addiu       $s7, $zero, 0x32
    ctx->pc = 0x2a0998u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2a099c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a099cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a09a0: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2A09A0u;
    SET_GPR_U32(ctx, 31, 0x2A09A8u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2A09A0u, 0x2A09A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A09A8u;
label_2a09a8:
    // 0x2a09a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a09a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a09ac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2a09acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2a09b0: 0xa0570000  sb          $s7, 0x0($v0)
    ctx->pc = 0x2a09b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 23));
    // 0x2a09b4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2A09B4u;
    {
        const bool branch_taken_0x2a09b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a09b4) {
            ctx->pc = 0x2A0A1Cu;
            goto label_2a0a1c;
        }
    }
    ctx->pc = 0x2A09BCu;
label_2a09bc:
    // 0x2a09bc: 0x8fb000b0  lw          $s0, 0xB0($sp)
    ctx->pc = 0x2a09bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a09c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a09c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a09c4: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2A09C4u;
    SET_GPR_U32(ctx, 31, 0x2A09CCu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2A09C4u, 0x2A09CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A09CCu;
label_2a09cc:
    // 0x2a09cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a09d0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2a09d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a09d4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2a09d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a09d8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2a09d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2a09dc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2a09dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2a09e0: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2a09e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2a09e4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A09E4u;
    {
        const bool branch_taken_0x2a09e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a09e4) {
            ctx->pc = 0x2A0A1Cu;
            goto label_2a0a1c;
        }
    }
    ctx->pc = 0x2A09ECu;
    // 0x2a09ec: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2a09ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a09f0: 0x8c420194  lw          $v0, 0x194($v0)
    ctx->pc = 0x2a09f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
    // 0x2a09f4: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2a09f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a09f8: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A09F8u;
    {
        const bool branch_taken_0x2a09f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a09f8) {
            ctx->pc = 0x2A0A1Cu;
            goto label_2a0a1c;
        }
    }
    ctx->pc = 0x2A0A00u;
    // 0x2a0a00: 0x24170031  addiu       $s7, $zero, 0x31
    ctx->pc = 0x2a0a00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2a0a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0a08: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2A0A08u;
    SET_GPR_U32(ctx, 31, 0x2A0A10u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2A0A08u, 0x2A0A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0A10u;
label_2a0a10:
    // 0x2a0a10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a0a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a0a14: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2a0a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a0a18: 0xa0570000  sb          $s7, 0x0($v0)
    ctx->pc = 0x2a0a18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 23));
label_2a0a1c:
    // 0x2a0a1c: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2a0a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x2a0a20: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2a0a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a0a24: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2a0a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0a28: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a0a28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0a2c: 0xc08a320  jal         func_228C80
    ctx->pc = 0x2A0A2Cu;
    SET_GPR_U32(ctx, 31, 0x2A0A34u);
    ctx->pc = 0x228C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228C80u, 0x2A0A2Cu, 0x2A0A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0A34u;
label_2a0a34:
    // 0x2a0a34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a0a34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0a38: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x2a0a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x2a0a3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a0a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0a40: 0xc0e2772  jal         func_389DC8
    ctx->pc = 0x2A0A40u;
    SET_GPR_U32(ctx, 31, 0x2A0A48u);
    ctx->pc = 0x389DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389DC8u, 0x2A0A40u, 0x2A0A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0A48u;
label_2a0a48:
    // 0x2a0a48: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2a0a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a0a4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2a0a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a0a50: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2a0a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a0a54: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a0a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a0a58: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2a0a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2a0a5c: 0x24a502b0  addiu       $a1, $a1, 0x2B0
    ctx->pc = 0x2a0a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 688));
    // 0x2a0a60: 0x27a6009c  addiu       $a2, $sp, 0x9C
    ctx->pc = 0x2a0a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2a0a64: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x2A0A64u;
    SET_GPR_U32(ctx, 31, 0x2A0A6Cu);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x2A0A64u, 0x2A0A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0A6Cu;
label_2a0a6c:
    // 0x2a0a6c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2a0a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a0a70: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A0A70u;
    {
        const bool branch_taken_0x2a0a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0a70) {
            ctx->pc = 0x2A0A9Cu;
            goto label_2a0a9c;
        }
    }
    ctx->pc = 0x2A0A78u;
    // 0x2a0a78: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x2a0a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2a0a7c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2a0a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a0a80: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x2a0a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x2a0a84: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2a0a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a0a88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a0a8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a0a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0a90: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2a0a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a0a94: 0xc10671c  jal         func_419C70
    ctx->pc = 0x2A0A94u;
    SET_GPR_U32(ctx, 31, 0x2A0A9Cu);
    ctx->pc = 0x419C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419C70u, 0x2A0A94u, 0x2A0A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0A9Cu;
label_2a0a9c:
    // 0x2a0a9c: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2a0a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x2a0aa0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a0aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0aa4: 0xc08a614  jal         func_229850
    ctx->pc = 0x2A0AA4u;
    SET_GPR_U32(ctx, 31, 0x2A0AACu);
    ctx->pc = 0x229850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229850u, 0x2A0AA4u, 0x2A0AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0AACu;
label_2a0aac:
    // 0x2a0aac: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2a0aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a0ab0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2a0ab0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0ab4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a0ab4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a0ab8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a0ab8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a0abc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a0abcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a0ac0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a0ac0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a0ac4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a0ac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0ac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a0ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0acc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0ad0: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2a0ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a0ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0ADCu;
    // 0x2a0adc: 0x0  nop
    ctx->pc = 0x2a0adcu;
    // NOP
    ctx->pc = 0x2a0ae0u;
}
