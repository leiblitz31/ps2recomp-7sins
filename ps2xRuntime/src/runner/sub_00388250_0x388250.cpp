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

// Function: sub_00388250
// Address: 0x388250 - 0x388368
void sub_00388250_0x388250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388250_0x388250");
#endif

    switch (ctx->pc) {
        case 0x388250u: goto label_388250;
        case 0x388254u: goto label_388254;
        case 0x388258u: goto label_388258;
        case 0x38825cu: goto label_38825c;
        case 0x388260u: goto label_388260;
        case 0x388264u: goto label_388264;
        case 0x388268u: goto label_388268;
        case 0x38826cu: goto label_38826c;
        case 0x388270u: goto label_388270;
        case 0x388274u: goto label_388274;
        case 0x388278u: goto label_388278;
        case 0x38827cu: goto label_38827c;
        case 0x388280u: goto label_388280;
        case 0x388284u: goto label_388284;
        case 0x388288u: goto label_388288;
        case 0x38828cu: goto label_38828c;
        case 0x388290u: goto label_388290;
        case 0x388294u: goto label_388294;
        case 0x388298u: goto label_388298;
        case 0x38829cu: goto label_38829c;
        case 0x3882a0u: goto label_3882a0;
        case 0x3882a4u: goto label_3882a4;
        case 0x3882a8u: goto label_3882a8;
        case 0x3882acu: goto label_3882ac;
        case 0x3882b0u: goto label_3882b0;
        case 0x3882b4u: goto label_3882b4;
        case 0x3882b8u: goto label_3882b8;
        case 0x3882bcu: goto label_3882bc;
        case 0x3882c0u: goto label_3882c0;
        case 0x3882c4u: goto label_3882c4;
        case 0x3882c8u: goto label_3882c8;
        case 0x3882ccu: goto label_3882cc;
        case 0x3882d0u: goto label_3882d0;
        case 0x3882d4u: goto label_3882d4;
        case 0x3882d8u: goto label_3882d8;
        case 0x3882dcu: goto label_3882dc;
        case 0x3882e0u: goto label_3882e0;
        case 0x3882e4u: goto label_3882e4;
        case 0x3882e8u: goto label_3882e8;
        case 0x3882ecu: goto label_3882ec;
        case 0x3882f0u: goto label_3882f0;
        case 0x3882f4u: goto label_3882f4;
        case 0x3882f8u: goto label_3882f8;
        case 0x3882fcu: goto label_3882fc;
        case 0x388300u: goto label_388300;
        case 0x388304u: goto label_388304;
        case 0x388308u: goto label_388308;
        case 0x38830cu: goto label_38830c;
        case 0x388310u: goto label_388310;
        case 0x388314u: goto label_388314;
        case 0x388318u: goto label_388318;
        case 0x38831cu: goto label_38831c;
        case 0x388320u: goto label_388320;
        case 0x388324u: goto label_388324;
        case 0x388328u: goto label_388328;
        case 0x38832cu: goto label_38832c;
        case 0x388330u: goto label_388330;
        case 0x388334u: goto label_388334;
        case 0x388338u: goto label_388338;
        case 0x38833cu: goto label_38833c;
        case 0x388340u: goto label_388340;
        case 0x388344u: goto label_388344;
        case 0x388348u: goto label_388348;
        case 0x38834cu: goto label_38834c;
        case 0x388350u: goto label_388350;
        case 0x388354u: goto label_388354;
        case 0x388358u: goto label_388358;
        case 0x38835cu: goto label_38835c;
        case 0x388360u: goto label_388360;
        case 0x388364u: goto label_388364;
        default: break;
    }

    ctx->pc = 0x388250u;

label_388250:
    // 0x388250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x388250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_388254:
    // 0x388254: 0x8f83bd20  lw          $v1, -0x42E0($gp)
    ctx->pc = 0x388254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950176)));
label_388258:
    // 0x388258: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x388258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_38825c:
    // 0x38825c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x38825cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_388260:
    // 0x388260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x388260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_388264:
    // 0x388264: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x388264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_388268:
    // 0x388268: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x388268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38826c:
    // 0x38826c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x38826cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_388270:
    // 0x388270: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x388270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_388274:
    // 0x388274: 0x34a50014  ori         $a1, $a1, 0x14
    ctx->pc = 0x388274u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20);
label_388278:
    // 0x388278: 0x40f809  jalr        $v0
label_38827c:
    if (ctx->pc == 0x38827Cu) {
        ctx->pc = 0x38827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388278u;
        // 0x38827c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388280u;
        goto label_388280;
    }
    ctx->pc = 0x388278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x388280u);
        ctx->pc = 0x38827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388278u;
        // 0x38827c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388278u, 0x388280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x388280u;
label_388280:
    // 0x388280: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x388280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_388284:
    // 0x388284: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_388288:
    if (ctx->pc == 0x388288u) {
        ctx->pc = 0x388288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388284u;
        // 0x388288: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38828Cu;
        goto label_38828c;
    }
    ctx->pc = 0x388284u;
    {
        const bool branch_taken_0x388284 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x388288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388284u;
        // 0x388288: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388284) {
            ctx->pc = 0x388294u;
            goto label_388294;
        }
    }
    ctx->pc = 0x38828Cu;
label_38828c:
    // 0x38828c: 0x10000031  b           . + 4 + (0x31 << 2)
label_388290:
    if (ctx->pc == 0x388290u) {
        ctx->pc = 0x388290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38828Cu;
        // 0x388290: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388294u;
        goto label_388294;
    }
    ctx->pc = 0x38828Cu;
    {
        const bool branch_taken_0x38828c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38828Cu;
        // 0x388290: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38828c) {
            ctx->pc = 0x388354u;
            goto label_388354;
        }
    }
    ctx->pc = 0x388294u;
label_388294:
    // 0x388294: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x388294u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_388298:
    // 0x388298: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x388298u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_38829c:
    // 0x38829c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x38829cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3882a0:
    // 0x3882a0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3882a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_3882a4:
    // 0x3882a4: 0x2442a6a8  addiu       $v0, $v0, -0x5958
    ctx->pc = 0x3882a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944424));
label_3882a8:
    // 0x3882a8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3882a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_3882ac:
    // 0x3882ac: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3882acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_3882b0:
    // 0x3882b0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3882b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3882b4:
    // 0x3882b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3882b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3882b8:
    // 0x3882b8: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x3882b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_3882bc:
    // 0x3882bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3882bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3882c0:
    // 0x3882c0: 0xc0e2686  jal         func_389A18
label_3882c4:
    if (ctx->pc == 0x3882C4u) {
        ctx->pc = 0x3882C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3882C0u;
        // 0x3882c4: 0xa2030003  sb          $v1, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3882C8u;
        goto label_3882c8;
    }
    ctx->pc = 0x3882C0u;
    SET_GPR_U32(ctx, 31, 0x3882C8u);
    ctx->pc = 0x3882C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3882C0u;
    // 0x3882c4: 0xa2030003  sb          $v1, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x3882C0u, 0x3882C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3882C8u;
label_3882c8:
    // 0x3882c8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x3882c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_3882cc:
    // 0x3882cc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x3882ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_3882d0:
    // 0x3882d0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3882d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_3882d4:
    // 0x3882d4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x3882d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_3882d8:
    // 0x3882d8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x3882d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_3882dc:
    // 0x3882dc: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x3882dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_3882e0:
    // 0x3882e0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x3882e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_3882e4:
    // 0x3882e4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x3882e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_3882e8:
    // 0x3882e8: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x3882e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_3882ec:
    // 0x3882ec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3882ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_3882f0:
    // 0x3882f0: 0x24429850  addiu       $v0, $v0, -0x67B0
    ctx->pc = 0x3882f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940752));
label_3882f4:
    // 0x3882f4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3882f8:
    if (ctx->pc == 0x3882F8u) {
        ctx->pc = 0x3882F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3882F4u;
        // 0x3882f8: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3882FCu;
        goto label_3882fc;
    }
    ctx->pc = 0x3882F4u;
    {
        const bool branch_taken_0x3882f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3882F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3882F4u;
        // 0x3882f8: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3882f4) {
            ctx->pc = 0x388300u;
            goto label_388300;
        }
    }
    ctx->pc = 0x3882FCu;
label_3882fc:
    // 0x3882fc: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x3882fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_388300:
    // 0x388300: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x388300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_388304:
    // 0x388304: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x388304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_388308:
    // 0x388308: 0x26020064  addiu       $v0, $s0, 0x64
    ctx->pc = 0x388308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_38830c:
    // 0x38830c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38830cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_388310:
    // 0x388310: 0xa6000050  sh          $zero, 0x50($s0)
    ctx->pc = 0x388310u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 0));
label_388314:
    // 0x388314: 0xa6000052  sh          $zero, 0x52($s0)
    ctx->pc = 0x388314u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 82), (uint16_t)GPR_U32(ctx, 0));
label_388318:
    // 0x388318: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x388318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_38831c:
    // 0x38831c: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x38831cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_388320:
    // 0x388320: 0x2484ada0  addiu       $a0, $a0, -0x5260
    ctx->pc = 0x388320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946208));
label_388324:
    // 0x388324: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x388324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_388328:
    // 0x388328: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x388328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38832c:
    // 0x38832c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x38832cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_388330:
    // 0x388330: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x388330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_388334:
    // 0x388334: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x388334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_388338:
    // 0x388338: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x388338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_38833c:
    // 0x38833c: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x38833cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
label_388340:
    // 0x388340: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x388340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_388344:
    // 0x388344: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x388344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_388348:
    // 0x388348: 0xc104c80  jal         func_413200
label_38834c:
    if (ctx->pc == 0x38834Cu) {
        ctx->pc = 0x38834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388348u;
        // 0x38834c: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388350u;
        goto label_388350;
    }
    ctx->pc = 0x388348u;
    SET_GPR_U32(ctx, 31, 0x388350u);
    ctx->pc = 0x38834Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388348u;
    // 0x38834c: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413200u, 0x388348u, 0x388350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388350u;
label_388350:
    // 0x388350: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x388350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_388354:
    // 0x388354: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x388354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_388358:
    // 0x388358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x388358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38835c:
    // 0x38835c: 0x3e00008  jr          $ra
label_388360:
    if (ctx->pc == 0x388360u) {
        ctx->pc = 0x388360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38835Cu;
        // 0x388360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388364u;
        goto label_388364;
    }
    ctx->pc = 0x38835Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38835Cu;
        // 0x388360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38835Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x388364u;
label_388364:
    // 0x388364: 0x0  nop
    ctx->pc = 0x388364u;
    // NOP
    ctx->pc = 0x388368u;
}
